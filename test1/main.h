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
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int (*get_func(char x))(va_list);
#endif /* MAIN_H */
