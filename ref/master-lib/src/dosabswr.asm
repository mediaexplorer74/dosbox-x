; master library - MS-DOS
;
; Description:
;	
;
; Function/Procedures:
;	void dos_abswrite( int drive, void far * buf, int power, long sector ) ;
;
; Parameters:
;	
;
; Returns:
;	none
;
; Binding Target:
;	Microsoft-C / Turbo-C / Turbo Pascal
;
; Running Target:
;	MS-DOS
;
; Requiring Resources:
;	CPU: 8086
;
; Notes:
;	
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
;	92/11/19 Initial
;	93/1/17 新形式呼び出しをDOS5ではなく DOS4からにした

	.MODEL SMALL
	include func.inc

	.DATA

	EXTRN	__osmajor:WORD

	.CODE

func DOS_ABSWRITE
	push	BP
	mov	BP,SP
	push	DS

	; 引数
	drive	= (RETSIZE+6)*2
	buf	= (RETSIZE+4)*2
	power	= (RETSIZE+3)*2
	sector	= (RETSIZE+1)*2

	mov	AX,[BP+drive]

	cmp	__osmajor,4
	jl	short DOS3
DOS5:	mov	CX,-1
	mov	BX,SS
	mov	DS,BX
	lea	BX,[BP+sector]	; param table...
	jmp	short ACCESS
DOS3:
	mov	DX,[BP+sector]
	mov	CX,[BP+power]
	lds	BX,[BP+buf]
ACCESS:
	push	SI
	push	DI
	int	26h
	popf
	cld
	pop	DI
	pop	SI

	pop	DS
	pop	BP
	ret	12
endfunc

END
