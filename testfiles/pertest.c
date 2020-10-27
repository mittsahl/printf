#include "../holberton.h"
#include <stdio.h>
int main(void)
{
	/* PRECISION TESTS */
	_printf("pp %.50d\n", 10000);
	_printf("p1 %.4s\n", "cccc");
	_printf("p2 %.10s\n", "cccc");
	_printf("p3 %.4s\n", NULL);
	_printf("p4 %.5s\n", "aaaaa");
	_printf("p5 %.3d\n", 100);
	_printf("p6 %.0d\n", 100);
	_printf("p7 %.4d\n", 100);
	_printf("p8 %.10d\n", 100);
	_printf("p9 %.50d\n", 100);
	_printf("p10 %.1d\n", 100);
	_printf("p11 %.3d\n", 100);
	_printf("p12 %.0d\n", 0);
	_printf("p13 %.3i\n", 100);
	_printf("p14 %.0i\n", 100);
	_printf("p15 %.4i\n", 100);
	_printf("p16 %.10i\n", 100);
	_printf("p17 %.50i\n", 100);
	_printf("p18 %.1i\n", 100);
	_printf("p19 %.3x\n", 100);
	_printf("p20 %.0x\n", 0);
	_printf("p21 %.3x\n", 100);
	_printf("p22 %.0x\n", 100);
	_printf("p23 %.4x\n", 100);
	_printf("p24 %.10x\n", 100);
	_printf("p25 %.50x\n", 100);
	_printf("p26 %.1x\n", 100);
	_printf("p27 %.3x\n", 100);
	_printf("p28 %.0x\n", 0);
	_printf("p29 %.3u\n", 100);
	_printf("p30 %.0u\n", 100);
	_printf("p31 %.4u\n", 100);
	_printf("p32 %.10u\n", 100);
	_printf("p33 %.50u\n", 100);
	_printf("p34 %.1u\n", 100);
	_printf("p35 %.3u\n", 100);
	_printf("p36 %.0u\n", 0);
	return (0);
}
