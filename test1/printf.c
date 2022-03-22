#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_c - prints a character
 * @args: arguments character
 * @c: character
 * Return: print character c
 */
void print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 * print_s - prints a character
 * @str: arguments character
 * @s: string
 * Return: print string s
 */
void print_s(va_list str)
{
	char *s;
	int j, i;
	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	s = va_arg(malloc(sizeof(*str) * j + 1), int);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		s[i] = str[i];
	}
	return (write(1, &s, 1));
	
}
/**
 * *get_func - get and compare 
 * @ch: type of format
 * Return: pointer to function that returns struct of type printable
 */
int (*get_func(char x))(va_list)
{
	int i = 0;
	spec arr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{NULL, NULL}
	};
	while (i < 3)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
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
		spec (*m)(va_list);
		va_list args;

		va_start(args, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (98);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count = count + 1;
					write(1, &format[i], 1);
					i += 2;
				}
				else
				{
					m = get_func(format[i + 1]);
					if (m)
						count = count + 1;
				}
			}	
		}

	}
	return (98);
}





