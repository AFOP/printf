#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_c - A function that prints a char
 * @list: Character
 * Return: Always 1 (Success)
 */
int print_c(va_list list)
{
	int ch = 0;

	ch = _putchar(va_arg(list, int));
	return (ch);
}
