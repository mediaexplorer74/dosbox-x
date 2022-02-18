; master library
;
; Description:
;	グラフィックカーソル形状データ (3)手
;
; Author:
;	恋塚昭彦
;
; Revision History:
;	93/ 4/13 Initial: master.lib 0.16  csrarrow.asm

.MODEL SMALL
.MODEL SMALL
.DATA

	public cursor_Hand
	public _cursor_Hand
cursor_Hand label byte
_cursor_Hand db 5,0
	dw	0000011000000000b
	dw	0000100100000000b
	dw	0000100100000000b
	dw	0000100110100000b
	dw	0000100101011110b
	dw	0000100000000010b
	dw	0011100000000001b
	dw	0100100000000001b
	dw	0100100000000001b
	dw	0100100000000001b
	dw	0100000000000001b
	dw	0100000000000010b
	dw	0100000000000010b
	dw	0010000000000100b
	dw	0001100000001000b
	dw	0000011111110000b

	dw	0000000000000000b
	dw	0000011000000000b
	dw	0000011000000000b
	dw	0000011000000000b
	dw	0000011010100000b
	dw	0000011111111100b
	dw	0000011111111110b
	dw	0011011111111110b
	dw	0011011111111110b
	dw	0011011111111110b
	dw	0011111111111110b
	dw	0011111111111100b
	dw	0011111111111100b
	dw	0001111111111000b
	dw	0000011111110000b
	dw	0000000000000000b

END
