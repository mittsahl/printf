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

/**
 * op_binary - takes va_list and returns bianry string
 * @args: argslist from function
 * Return: binary string
 */
char *op_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *string = utoa(num, 2);

	return (string);
}
