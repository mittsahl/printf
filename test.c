#include "holberton.h"
#include <stdio.h>
int main(void)
{
	int num = 12345;
	_printf("Testing\n");
	_printf("Test\n");
	_printf("%s\n", "test");
	_printf("This is a %s\n", "test for before");
	_printf("Integer i: %i\n", num);
	_printf("Integer d: %d\n", num);
	_printf("Negative Int: %d\n", -12345);
	
	return (0);
}
