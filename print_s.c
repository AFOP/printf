#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_s - prints a string
 * @args: arguments character
 * Return: print character c
 **/
int print_s(va_list args)
{
	int j = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
