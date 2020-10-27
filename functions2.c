#include "holberton.h"
/**
 * op_unsignedInt - takes in an unsigned int (from va-list args)
 * and returns as an
 * unsigned integer.
 * @args: arglist from main function
 * Return: string
 */
char *op_unsignedInt(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *numstring =  utoa(num, 10);

	return (numstring);
}

/**
 * op_unsignedHexCap - takes in an unsigned int (from va-list args)
 * and returns as an
 * string in hex notation (base 8) in uppercase letters.
 * @args: arglist from main function
 * Return: string
 */
char *op_unsignedHexCap(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *numstring = utoaCap(num, 16);

	return (numstring);
}


/**
 * op_unsignedHex- takes in an unsigned int
 * (from va-list args) and returns as an
 * string in hex notation (base 8) in lowercase letters.
 * @args: arglist from main function
 * Return: string
 */
char *op_unsignedHex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *numstring = utoa(num, 16);

	return (numstring);
}

/**
 * op_pointer - takes in an unsigned long int
 * (from va-list args) and returns as an
 * string in hex notation (base 8) in uppercase letters.
 * @args: arglist from main function
 * Return: string
 */
char *op_pointer(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);
	char *numstring = ultoa(num, 16);
	char *pointer = "0x";
	char *together = malloc(_strlen(numstring) + 2);

	_strcpy(together, pointer);
	_strcat(together, numstring);
	return (together);
}

/**
 * op_percent - takes in an unsigned long int
 * (from va-list args) and returns as an
 * string in hex notation (base 8) in uppercase letters.
 * @args: arglist from main function
 * Return: string
 */
char *op_percent(va_list args)
{
	args = args;
	char *string = "%";

	return (string);
}
