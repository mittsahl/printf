#include "holberton.h"
#include <stdio.h>
int main(void)
{
	int num = 12345;
	_printf("Testing\n");
	printf("Testing\n");
	_printf("%s\n", "test");
	printf("%s\n", "test");
	_printf("This is a %s\n", "test for before");
	printf("This is a %s\n", "test for before");
	_printf("Integer i: %i\n", num);
	printf("Integer i: %i\n", num);
	_printf("Integer d: %d\n", num);
	printf("Integer d: %d\n", num);
	_printf("Negative Int: %d\n", -12345);
	printf("Negative Int: %d\n", -12345);
	_printf("%u\n", UINT_MAX);
	printf("%u\n", UINT_MAX);	
	_printf("%o\n", num);
	printf("%o\n", num);
	return (0);
}
