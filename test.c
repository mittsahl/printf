#include "holberton.h"
#include <stdio.h>
int main(void)
{
	int num = 18273748;
	int neg = -123;
	int *pointer = &num;
	char *s = "Holberton";
	_printf("%r", "Reverse this string");
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
	_printf("%x\n", num);
	printf("%x\n", num);
	_printf("%X\n", num);
	printf("%X\n", num);
	_printf("Pointer to num: %p\n", pointer);
	printf("Real pointer to num: %p\n", (void *)pointer);
	printf("\n");
	_printf("Testing : %s %p %x %X %d\n", s, num, num, num, neg);
	 printf("Expected: %s %p %x %X %d\n", s, num, num, num, neg);
	return (0);
}
