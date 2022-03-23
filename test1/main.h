#ifndef MAIN_H
#define MAIN_H

/**
 * struct specifier - Struct format
 *
 * @f: function
 * @list: The list of the function
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
