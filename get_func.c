#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * get_func - get and compare
 * @format: pointer char
 * Return: pointer to function that returns struct of type printable
 */
int (*get_func(const char *format))(va_list)
{
	int i = 0;

	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};
	while (i != NULL)
	{
		if (*(arr[i].valid) == *format)
		{
			break;
		}
		i++;
	}
	return (arr[i].f);
}
