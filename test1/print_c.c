#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_c - A function that prints a char
 * @args: Character
 * Return: Always 1 (Success)
 */
int print_c(va_list args)
{
	int c, count = 0;

	c = va_arg(args, int);
	_putchar(c);
	count++;
	return (count);
}
