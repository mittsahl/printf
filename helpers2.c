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
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';
	return (dest);

}

/**
 * rev_string - reverses a string
 * Return: void
 * @s: string passed function from main
 */

void rev_string(char *s)
{
	int length;
	char *end = s;
	int i, tmp;

	for (length = 0; s[length] != '\0'; length++)
		end++;
	end--;
	for (i = 0; i < length / 2; i++)
	{
		tmp = *end;
		*end = s[i];
		s[i] = tmp;
		end--;
	}
}

/**
 * handleBufandArgs - sets buf to null and freww
 * @buf: buffer from main
 * @args: va_list from main
 * Return: void
 */
void handleBufandArgs(char *buf, va_list args)
{
	int bufPos = 0;

	while (buf[bufPos])
	{
		buf[bufPos] = '\0';
		bufPos++;
	}
	free(buf);
	va_end(args);
}
