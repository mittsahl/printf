#include "holberton.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
        va_list args;
        int i = 0;
        int j = 0;
        int length = 0;
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
                if (format[i] == '%')
                {
                        function = get_op_func(*(format + i + 1));
                        str = function(args);
                        _strcpy(buf, str);
                        i++;
                        while (buf[j])
                        {
                                j++;
                        }
                        continue;
                }
                j++;
        }
        length = _strlen(buf);
        write(1, buf, length);
        free(buf);
        va_end(args);
        return (0);
}

