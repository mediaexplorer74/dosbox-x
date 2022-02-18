; master library - pattern - clip - PC98V
;
; Description:
;	クリップ枠で切断するパターン表示
;
; Function/Procedures:
;	void super_put_rect( int x, int y, int patnum ) ;
;
; Parameters:
;	x,y    座標
;	patnum パターン番号
;
; Returns:
;	none
;
; Binding Target:
;	Microsoft-C / Turbo-C / Turbo Pascal
;
; Running Target:
;	PC-9801V
;
; Requiring Resources:
;	CPU: V30
;	GRCG
;
; Notes:
;	まだ最適化してないぜ(遅いってことある)
;
; Assembly Language Note:
;	
;
; Compiler/Assembler:
;	TASM 3.0
;	OPTASM 1.6
;
; Author:
;	恋塚昭彦
;
; Revision History:
;	93/ 6/17 Initial: superptr.asm/master.lib 0.19
;	93/ 7/13 [M0.20] bugfix: ・shiftありのときにソースデータの先頭番地-1の
;				   場所を読んでいるが、ソースデータが0番地から
;				   始まって、かつパターンが非常に小さい場合、
;				   0ffffh番地がVRAM領域に達してハングアップ!
;				 ・xが負で、かつパターンの右側が見える場合
;				   おかしくなっていた。
;		          呼べる条件ならば super_putを呼ぶようにした。

	.186
	.MODEL SMALL
	include func.inc

GC_MODEREG equ 7ch
GC_TILEREG equ 7eh

	.DATA

	EXTRN	super_patsize:WORD
	EXTRN	super_patdata:WORD
	EXTRN	ClipXL:WORD
	EXTRN	ClipXR:WORD
	EXTRN	ClipYT:WORD
	EXTRN	ClipYH:WORD
	EXTRN	ClipYB:WORD
	EXTRN	ClipYT_seg:WORD

	.DATA?

linebyte	dw ?

	.CODE
	EXTRN	SUPER_PUT:CALLMODEL

MRETURN macro
	pop	DI
	pop	SI
	pop	BP
	ret	6
	EVEN
	endm

retfunc EXIT
	MRETURN
endfunc

func SUPER_PUT_RECT	; super_put_rect() {
	push	BP
	mov	BP,SP
	push	SI
	push	DI

	; 引数
	x	= (RETSIZE+3)*2
	y	= (RETSIZE+2)*2
	patnum	= (RETSIZE+1)*2

	mov	BX,[BP+patnum]
	shl	BX,1
	mov	AX,super_patdata[BX]
	mov	CS:_PTNSEG_,AX

	mov	BX,super_patsize[BX]
	xor	AX,AX
	xchg	AL,BH			; BX = ylen
	mov	linebyte,AX

	mov	CX,AX
	shl	CX,3
	add	CX,[BP+x]
	dec	CX			; CX:rx = x + linebyte * 8 - 1

	imul	BX
	mov	CS:_PLANESIZE_,AX

	; 全体が枠内なら何もせず終了
	cmp	CX,ClipXR		; CX = rx
	jg	short SOME_OUT
	mov	DX,ClipXL		; DX = ClipXL
	cmp	[BP+x],DX
	jl	short SOME_OUT
	mov	DI,[BP+y]		; DI = y
	cmp	ClipYT,DI
	jg	short SOME_OUT
	mov	AX,BX
	add	AX,DI
	cmp	AX,ClipYB		; ylen + y : ClipYB
	jge	short SOME_OUT

	; 完全に中だから、super_put()に任せてしまう(^^;
	pop	DI
	pop	SI
	pop	BP
	jmp	near ptr SUPER_PUT
	EVEN

SOME_OUT:
	; 全体が枠外なら何もせず終了
	cmp	CX,ClipXL		; CX = rx
	jl	short EXIT
	mov	DX,ClipXR		; DX = ClipXR
	cmp	[BP+x],DX
	jg	short EXIT
	mov	DI,[BP+y]		; DI = y
	cmp	ClipYB,DI
	jl	short EXIT
	mov	AX,BX
	add	AX,DI
	cmp	AX,ClipYT		; ylen + y : ClipYT
	jle	short EXIT

	; 右クリップ
	cmp	CX,DX			; rx : ClipXR
	jle	short RIGHT_CLIPPED
	mov	CX,DX
RIGHT_CLIPPED:

	mov	AL,[BP+x]
	and	AL,7
	mov	CS:_SHIFT_,AL

	; 左クリップ
	xor	SI,SI			; SI = pattern offset

	mov	AX,ClipXL
	cmp	[BP+x],AX
	jge	short LEFT_CLIPPED

	mov	DX,AX
	shr	DX,3
	add	SI,DX			; SI += ClipXL / 8
	mov	DX,[BP+x]
	sar	DX,3
	sub	SI,DX			; SI -= x / 8

	mov	[BP+x],AX		; x = ClipXL
LEFT_CLIPPED:

	; 上クリップ
	sub	DI,ClipYT		; DI:y -= ClipYT
	jns	short TOP_CLIPPED
	add	BX,DI			; ylen += DI
	mov	AX,linebyte
	imul	DI			; SI -= DI * linebyte
	sub	SI,AX
	xor	DI,DI			; DI:y = 0
TOP_CLIPPED:

	; 下クリップ
	lea	AX,[BX+DI-1]
	sub	AX,ClipYH		; y+ylen : ClipYH
	jle	short BOTTOM_CLIPPED
	sub	BX,AX
BOTTOM_CLIPPED:
	mov	CS:_YLEN_,BX

	;
	mov	AX,[BP+x]		; AX = x / 8
	shr	AX,3
	imul	BX,DI,80
	add	BX,AX
	mov	CS:_DRAW_ADR_,BX

	mov	BX,CX			; BX = rx

	mov	DX,80ffh
	and	CL,7
	sar	DH,CL			; DH = rmask
	mov	CL,[BP+x]
	and	CL,7
	shr	DL,CL			; DL = lmask

	mov	CX,AX
	shr	BX,3
	sub	BX,CX
	jnz	short NAGAI
	and	DL,DH			; lmask &= rmask
NAGAI:
	mov	CS:_DRAWLEN_,BX

	; DX = (DL=lmask, DH=rmask)

	mov	ES,ClipYT_seg

	mov	CL,12h
	org $-1
_SHIFT_ db	?

	mov	AL,11000000b	; GC_RMW or GC_BRGI
	out	GC_MODEREG,AL
	mov	AL,0
	out	GC_TILEREG,AL
	out	GC_TILEREG,AL
	out	GC_TILEREG,AL
	out	GC_TILEREG,AL
	call	draw

	mov	AL,11001110b	; GC_RMW or GC_B
	out	GC_MODEREG,AL
	mov	AL,0ffh
	out	GC_TILEREG,AL
	out	GC_TILEREG,AL
	out	GC_TILEREG,AL
	out	GC_TILEREG,AL
	call	draw
	mov	AX,011001101b	; GC_RMW or GC_R
	out	GC_MODEREG,AL
	call	draw
	mov	AX,11001011b	; GC_RMW or GC_G
	out	GC_MODEREG,AL
	call	draw
	mov	AX,11000111b	; GC_RMW or GC_I
	out	GC_MODEREG,AL
	call	draw

	mov	AL,0
	out	GC_MODEREG,AL

	MRETURN
endfunc		; }



; 描画実体 -------------------

	; 8ドット境界以外 -----------

	; CL = shift
	; DL = lmask
	; DH = rmask
	; SI = pat
	; DI = drawadr
	; ES = clipyt_seg
draw_shift	proc near
	test	SI,SI		; 1バイト前を読むので、0->0ffffhになると
				; DSによってはVRAMに重なる!ので絶対避けるのだ
	jz	short draw_shift_low
	EVEN
draw_shift_loop:
	mov	AH,[SI-1]	; 前のバイトを読む必要があるのは、
				; 左クリップされていて、必要なのは元データの
				; 2byte目以降で、右シフトされていて、
				; 左端マスクがそのシフト量よりも左から描画を
				; 許可しているとき。
draw_shift_low:
	mov	AL,[SI]
	inc	SI
	mov	BX,AX

	shr	BX,CL
	and	BL,DL
	mov	ES:[DI],BL
	inc	DI

	mov	CH,12h
	org	$-1
_S_DRAWLEN_ db ?
	dec	CH
	js	short shift_1byte
	je	short shift_2byte

shift_xloop:
	mov	AH,AL
	mov	AL,[SI]
	inc	SI
	mov	BX,AX
	shr	BX,CL
	mov	ES:[DI],BL
	inc	DI
	dec	CH
	jnz	short shift_xloop

shift_2byte:
	mov	AH,AL
	mov	AL,[SI]
	inc	SI
	shr	AX,CL
	and	AL,DH
	mov	ES:[DI],AL
	inc	DI

shift_1byte:
	add	SI,1234h
	org	$-2
_S_ADD_SI_ dw	?

	add	DI,1234h
	org	$-2
_S_ADD_DI_ dw	?

	dec	BP
	jnz	draw_shift_loop

	ret
draw_shift	endp


	; 8ドット境界 -----------
	EVEN
draw_noshift	proc near
	mov	AL,[SI]
	inc	SI
	and	AL,DL
	mov	ES:[DI],AL
	inc	DI

	cmp	BX,1
	jl	short noshift_1byte

	lea	CX,[BX-1]
	shr	CX,1
	rep	movsw
	adc	CX,CX
	rep	movsb

	lodsb
	and	AL,DH
	stosb

noshift_1byte:
	mov	AL,0
	xchg	AL,AH	; AX = linebyte - 1

	add	SI,AX
	sub	SI,BX
	mov	AH,AL

	add	DI,80-1
	sub	DI,BX

	dec	BP
	jnz	short draw_noshift

	ret
draw_noshift	endp
	EVEN



	; in: 
	;	SI = pat (save)
	;	ES = clipyt_seg
	;
draw	proc near
	push	SI
	push	DS

	JMOV	AX,_PTNSEG_
	push	AX
	JMOV	BP,_YLEN_

	JMOV	DI,_DRAW_ADR_
	JMOV	BX,_DRAWLEN_
	mov	AX,linebyte
	dec	AX
	cmp	CL,0
	jne	short j_shift
j_noshift:
	mov	AH,AL

	pop	DS	; get ds
	push	offset j_end
	jmp	draw_noshift

j_shift:
	mov	CS:_S_DRAWLEN_,BL

	sub	AX,BX
	mov	CS:_S_ADD_SI_,AX

	mov	AX,80 - 1
	sub	AX,BX
	mov	CS:_S_ADD_DI_,AX

	pop	DS	; get ds
	call	draw_shift

j_end:
	pop	DS
	pop	SI
	add	SI,1234h
	org $-2
_PLANESIZE_ dw ?
	ret
draw	endp

END
