#include "holberton.h"
/**
 *itoa - utoa conversion
 *Return: string
 *@num: a
 *@base: a
 */
char *itoa(int num, int base)
{
	static char buf[16] = {0};
	int a = 30;

	if (num > 0)
	{
		for (; (num && a) > 0; --a, num /= base)
			buf[a] = "0123456789ABCDEF"[num % base];
	}
	if (num < 0)
	{
		for (; (num < 0 && a > 0); --a, num /= base)
			buf[a] = "0123456789ABCDEF"[(num % base) * -1];
		buf[a] = '-';
		a--;
	}
	return (&buf[a + 1]);
}
/**
 *utoa - utoa conversion
 *Return: string
 *@num: a
 *@base: a
 */
char *utoa(unsigned int num, unsigned int base)
{
	static char buf[32] = {0};
	int a = 30;

	if (num > 0)
	{
		for (; (num && a) > 0; --a, num /= base)
		{
			buf[a] = "0123456789abcdef"[num % base];
		}
	}
	return (&buf[a + 1]);
}

/**
 *ultoa - utoa conversion
 *Return: string
 *@num: a
 *@base: a
 */
char *ultoa(unsigned long int num, unsigned long int base)
{
	static char buf[16] = {0};
	int a = 30;

	if (num > 0)
	{
		for (; (num && a) > 0; --a, num /= base)
			buf[a] = "0123456789abcdef"[num % base];
	}
	return (&buf[a + 1]);
}

/**
 *utoaCap - utoa conversion
 *Return: string
 *@num: a
 *@base: a
 */
char *utoaCap(unsigned int num, unsigned int base)
{
	static char buf[16] = {0};
	int a = 30;

	if (num > 0)
	{
		for (; (num && a) > 0; --a, num /= base)
			buf[a] = "0123456789ABCDEF"[num % base];
	}
	return (&buf[a + 1]);
}

/**
 *rot13 - encode in rot3
 *Return: rot13'd string
 *@a: string
 */
char *rot13(char *a)
{
	int i = 0, j;
	char *string1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *string2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(a + i) != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == string1[j])
			{
				a[i] = string2[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
