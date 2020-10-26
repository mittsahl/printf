#include "holberton.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
        va_list args;
	int i = 0;
	int j = 0;
	char *str;
	char *(*function)(va_list);
	char *buf = malloc(MAX_BUF_SIZE);
	va_start(args, format);
	
	for (i = 0; format[i] != '\0'; i++)
	{
		//Edge cases
		if (format[i] == '\0')
			return (-1);
		//Increase both if it is a char
		if (format[i] != '%')
			buf[j] = format[i];
		//get_op_func if it is a %
		if (format[i] == '%')
		{	
			printf("buf before strcat: %s\n", buf);
			function = get_op_func(*(format + i + 1));
			str = function(args);
			_strcat(buf, str);
			i++;
			
			printf("buf after strcat: %s\n", buf);
			while (buf[j] != '\0')
				j++;
			continue;
		}
		j++;
	}			
	printf("buf: %s\n",buf);
	free(buf);
	va_end(args);
	return (0);
}
