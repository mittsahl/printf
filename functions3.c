#include "holberton.h"
/**
 * op_rot13 - takes in an unsigned long int
 * (from va-list args) and returns as an
 * string in hex notation (base 8) in uppercase letters.
 * @args: arglist from main function
 * Return: string
 */
char *op_rot13(va_list args)
{
	char *string = va_arg(args, char *);
	char *str = malloc(_strlen(string));

	_strcpy(str, string);
	rot13(str);
	return (str);
}
