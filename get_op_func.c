#include "holberton.h"

/**
 * get_op_func - function that returns a pointer to a function
 * that takes a va_list and returns a string
 * @s: char to be matched
 * Return: pointer to appropriate function
 */

char *(*get_op_func(const char s))(va_list)
{
	funcStruct array[] = {
	{"s", op_string},
	{"i", op_int},
	{"d", op_int},
	{"u", op_unsignedInt}, 
	{"o", op_octal}, 
	{"x", op_unsignedHex},
/*	{"c", op_char}, */
	{"p", op_pointer}, 
	{"r", op_reverse},
/*	{"%", op_percent},*/
	{NULL, NULL}
	};


	int i = 0;
	
	while (*(array + i)->letter)
	{
		if (*(array + i)->letter == s)
		{
			break;
		}
		i++;
	}
	return (*(array + i)->func);
}
