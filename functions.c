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
 * op_int - takes in an int and returns as a string
 * @args: arglist from main function
 * Return: String (returns int for now)
 */
int *op_int(va_list args)
{
	//This code below can be simplified

	int *ptr_int;
	int num = va_arg(args, int);

	ptr_int = malloc(sizeof(*ptr_int));

	if (!ptr_int)
	{
	//ptr_int should never be null but just in case
		return (0);
	}
	*ptr_int = 0;
	*ptr_int = itoa(num, 10);
	return (*ptr_int);
}
/**
 * op_octal - takes in an int and converts into base 8 using itoa()
 * @args: arglist from main function
 * Return: String (returns int for now)
 */
int *op_octal(va_list args)
{
	int *ptr_int;
	int num = va_arg(args, int);

	ptr_int = malloc(sizeof(*ptr_int));

	if (!ptr_int)
	{
	//ptr_int should never be null but just in case
		return (0);
	}
	*ptr_int = 0;
	*ptr_int = itoa(num, 8);
	return (*ptr_int);
}


/**
 * op_hex - takes in an int and converts into base 16 using itoa()
 * @args: arglist from main function
 * Return: String (returns int for now)
 */
int *op_hex(va_list args)
{
	int *ptr_int;
	int num = va_arg(args, int);

	ptr_int = malloc(sizeof(*ptr_int));

	if (!ptr_int)
	{
	//ptr_int should never be null but just in case
		return (0);
	}
	*ptr_int = 0;
	*ptr_int = itoa(num, 16);
	return (*ptr_int);
}
