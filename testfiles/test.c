#include "../holberton.h"
#include <stdio.h>
/**
 * main - testing
 * Return: void
 */
int main(void)
{
	int num = 18273748;
	int neg = -123;
	int *pointer = &num;
	char *s = "Holberton";
	char c = 'd';

	_printf("%r\n\n", "Reverse this string");
	_printf("Testing : Testing\n");
	printf("Expected: Testing\n\n");
	_printf("Testing : Char %c asdf\n", c);
	printf("Expected: Char %c asdf\n\n", c);
	_printf("Testing : %s\n", "test");
	printf("Expected: %s\n\n", "test");
	_printf("Testing : This is a %s\n", "test for before");
	printf("Expected: This is a %s\n\n", "test for before");
	_printf("Testing : Integer i: %i\n", num);
	printf("Expected: Integer i: %i\n\n", num);
	_printf("Testing : Integer d: %d\n", num);
	printf("Expected: Integer d: %d\n\n", num);
	_printf("Testing : Negative Int: %d\n", -12345);
	printf("Expected: Negative Int: %d\n\n", -12345);
	_printf("Testing : %u\n", UINT_MAX);
	printf("Expected: %u\n\n", UINT_MAX);
	_printf("Testing : %o\n", num);
	printf("Expected: %o\n\n", num);
	_printf("Testing : %x\n", num);
	printf("Expected: %x\n\n", num);
	_printf("Testing : %X\n", num);
	printf("Expected: %X\n\n", num);
	_printf("Testing : Pointer to num: %p\n", pointer);
	printf("Expected: Pointer to num: %p\n\n", (void *)pointer);
	_printf("Testing : Percent: %%\n");
	printf("Expected: Percent: %%\n\n");
	_printf("Testing : %s %p %x %X %d\n", s, &num, num, num, neg);
	printf("Expected: %s %p %x %X %d\n\n", s, (void *)&num, num, num, neg);
	_printf("%R\n", "string");
	return (0);
}
