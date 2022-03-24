#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: string with the format
 * Return: NULL in case of error or print the string.
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int count = 0, i;
		int (*m)(va_list);
		va_list args;

		va_start(args, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (count);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count = count + 1;
					_putchar(format[i]);
					i += 2;
				}
				else
				{
					m = get_func(format[i + 1]);
					if (m)
					{
						if (format[i + 1] == 'c')
							      count += print_c(args);
						                                                if (format[i + 1] == 's')
													                                                    count += print_s(args);
					}
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				count = count + 1;
				_putchar(format[i]);
				i++;
			}
		}
		va_end(args);
		return (count);
	}
	return (0);
}
