#include <stdlib.h>                                              

#include <stdarg.h>                                              

#include <stdio.h>                                               

#include "main.h"                                                

                                                                 

/**                                                              
 *
 *  * print_c - prints a character                                  
 *
 *   * @args: arguments character                                    
 *
 *    * @c: character                                                 
 *
 *     * Return: print character c                                     
 *
 *      */                                                              

int print_c(va_list args)                                        

{                                                                

	int c, count = 0;                                                

	                                                                 

	c = va_arg(args, int);                                           

	_putchar(c);                                                     

	count++;                                                         

	return (count);                                                  

}  
