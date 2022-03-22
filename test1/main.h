#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
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

=======
>>>>>>> 6a6514b04769c82aa7a3da15a80212c59b6a96ca
int _printf(const char *format, ...);

#endif /* MAIN_H */
