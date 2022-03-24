#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_c - A function that prints a char
 * @args: Character
 * Return: Always 1 (Success)
 */
int print_c(va_list list)
{
		int c = 0;

			c = _putchar(va_arg(list, int));
				return (c);
}
