#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: string with the format
 * Return: NULL in case of error or print the string.
 */
int _printf(const char format, ...)
{
        int count  = 0, i = 0;
        int (m)(va_list);
        va_list args;

        va_start(args, format);
        if (format == NULL)
                return (-1);
        while(format[i])
        {
                for(; format[i] != '%' && format[i]; i++)
                {
                        _putchar(format[i]);
                        count++;
                }
                if (!format[i])
                        return (count);
                if (format[i + 1] == '%')
                {
                        i += 2;
                }else
                {
                        i++;
                }
                m = get_func(&format[i + 1]);
                if (m != NULL)
                {
                        count += m(args);
                        i += 2;
                        continue;
                }
                if (!format[i + 1])
                {
                        return (-1);
                }
                _putchar(format[i]);
                count++;
        }
        va_end(args);
        return (count);
}
