#include "holberton.h"

/**
 * op_string - returns char from va-list
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
 * op_unsignedHex- takes in an unsigned int (from va-list args) and returns as an
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
 * op_pointer - takes in an unsigned long int (from va-list args) and returns as an
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

char *op_percent(va_list args)
{
	char *string = "%";
	return (string);
}
