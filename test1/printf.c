#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_c - prints a character
 * @args: arguments character
 * @c: character
 * Return: print character c
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_s - prints a string
 * @args: arguments character
 * @str: pointer of string
 * @i: integer for string
 * Return: print character c
 */
int print_s(va_list args)
{
    int i = 0;
    char *str;
    
    str = va_arg(args, char*);
    if (str == NULL)
      return (98);
    while (str)
    {
      return (_putchar(str[i]));
      i++;
    }
    return (98);
}

/**
 * print_percent - prints a string
 * @args: arguments character
 * @str: pointer of string
 * @i: integer for string
 * Return: print character c
 */
int print_percent(va_list args)
{
     char *str;

    str = "%";
    if (va_arg(args, int) == *str)
    {
        return (*str);
    }
    return (*str);
}

/**
 * *get_func - get and compare 
 * @x: type of format
 * Return: pointer to function that returns struct of type printable
 */
void (*get_func(char x))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};
	while (i < 3)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		else 
			return (arr[0].f);
		i++;
	}
	return (NULL);
}

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
            return (-1);
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
                        count = count + 1;
                        m(args);
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
    return (-1);
}
