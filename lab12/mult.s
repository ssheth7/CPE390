	.global _Z4multii
_Z4multi:
	mov	R3,R0 //R0 = 8 R1 = 7 R3 = 8
loop:
	sub	R1,#2 // 7-2 = 5   5-2 = 3	
	lsl	R3,#1 //8*2 = 16   16*2 = 32
	cmp	R1, #3 //5 vs 3    3 vs 3
	bgt	loop
	b	addloop
addloop:
	add	R3,R0 // 32 + 8
	subs	R1,#1 //
	bne	addloop
	b	out
out:
	mov	R0,R3
	bx	lr
	
