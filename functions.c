#include "holberton.h"

/**
 * op_char - returns char from va-list
 * @args: arglist from main function
 * Return: String
 */
char *op_char(va_list args)
{
	char string = va_arg(args, int);
	char *pointer = malloc(2);

	pointer[0] = string;
	pointer[1] = '\0';

	return (pointer);
}

/**
 * op_string - returns string from va-list
 * @args: arglist from main function
 * Return: String
 */
char *op_string(va_list args)
{
	char *string = va_arg(args, char *);

	return (string);
}

/**
 * op_reverse - returns string from va-list reversed
 * @args: arglist from main function
 * Return: String
 */
char *op_reverse(va_list args)
{
	char *string = va_arg(args, char *);
	char *str = malloc(_strlen(string));

	_strcpy(str, string);
	rev_string(str);
	return (str);
}
/**
 * op_int - takes in an int (should take in va_list args)
 * and returns as a string
 * @args: arglist from main function
 * Return: String
 */
char *op_int(va_list args)
{
	int num = va_arg(args, int);
	char *numstring = itoa(num, 10);

	return (numstring);
}
/**
 * op_octal - takes in an int (from va-list args) and returns as an
 * string in octal notation (base 8).
 * @args: arglist from main function
 * Return: string
 */
char *op_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *numstring = utoa(num, 8);

	return (numstring);
}
