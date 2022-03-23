#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * get_func - get and compare
 * @x: type of format
 * Return: pointer to function that returns struct of type printable
 */
int (*get_func(char x))(va_list)

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
		i++;
	}
	return (0);
}
