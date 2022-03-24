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
	int count  = 0, i = 0;
	int (*m)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while(format[i])
	{
		for(; format[i] != '%' && format[i] != NULL; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if(format[i + 1] == '%')
		{
			i += 2;
		}else
		{
		i++;
		}
		if(!format[i])
		{
			return (count);
		}
		m = get_func(&format[i + 1]);
		if(m != NULL)
		{
			count += m(args);
			i += 2;
			continue;
		}
		if(!format[i + 1])
		{
			return (-1);
		}
		_putchar(format[i]);
		count++;
	}
	va_end(args);
	return (count);
}
	/*
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
