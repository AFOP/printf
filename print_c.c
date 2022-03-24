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
	char ch = (va_arg(list, int));

	_putchar(ch);
	return (1);
}
