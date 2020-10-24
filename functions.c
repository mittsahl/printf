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
