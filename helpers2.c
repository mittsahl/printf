#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * Return: dest;
 * @src: src of first string
 * @dest: where both concat strings will end up
 */

char *_strcat(char *dest, char *src)
{
	int destLength, i;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (i = 0; i < destLength + 1 && src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';
	return (dest);

}

/**
 * itoa - changes and int to a string
 * @num: int passed int
 * @str: where the string will end 
 * @base: base of the conversion
 * Return: string
 */

char *itoa(int num, char *str, int base)
{
	
}
