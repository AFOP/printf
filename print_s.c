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
	int j, i = 0;
	long count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = '\0';
	}
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
	}
	return (count);
}
