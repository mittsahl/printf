#include "holberton.h"

/**
 * op_string - returns string from va-list
 * @args: arglist from main function
 * Return: string
 */

char *op_string(va_list args)
{
	char *string = va_arg(args, char *);
	return (string);
}

char *op_reverse(va_list args)
{
	char *string = va_arg(args, char *);
	char *str = malloc(_strlen(string));
		
	_strcpy(str, string);
	rev_string(str);
	return(str);	
}

/**
 * op_int - takes in an int (should take in va_list args) and returns as a string
 * @args: arglist from main function
 * Return: String
 */
char *op_int(va_list args)
{
	int num = va_arg(args, int);
	char *numstring = itoa(num, 10);
	return (numstring);
}

char *op_octal(va_list args)
{
	int num = va_arg(args, int);
	char *numstring = itoa(num, 8);
	return (numstring);
}

char *op_unsignedHex(va_list args)
{
	int num = va_arg(args, int);
	
	if (num < 0)
		num = UINT_MAX + (num + 1);
	char *numstring = itoa(num, 10);
	return (numstring);
}
