#include <stdio.h>
#include <limits.h>
#include "holberton.h"
/**
 * main - testing
 * Return: void
 */
int main(void)
{
	/* MIN MAX */
	int min = INT_MIN;
	int max = INT_MAX;

	_printf("Test : %d, %d\n", min, max);
	printf("Expect: %d, %d,\n\n", min, max);
	_printf("Test : %i, %i\n", min, max);
	printf("Expect: %i, %i\n", min, max);
	


	return (0);
}
