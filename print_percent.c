#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_percent - prints a string
 * @args: Arguments character
 * Return: Print character c
 */
int print_percent(va_list args)
{
	int count = 0;
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		_putchar(*str);
	}
	return (count);
}
