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
		if (format[i] != '%')
		{
			buf[j] = format[i];
		}
		else if (format[i] == '%')
		{	
			function = get_op_func('s');
			str = function(args);
			_strcat(buf, str);
			i++;
			while (buf[j] != '\0')
				j++;
			continue;
		}
		j++;
		//printf("buf: %s\n",buf);
	}			
	printf("buf: %s\n",buf);
	free(buf);
	va_end(args);
	return (0);
}
