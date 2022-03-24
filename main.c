#include <stdlib.h>

#include <stdarg.h>

#include <stdio.h>

#include <unistd.h>

#include <string.h>
#include "main.h"
int main(void)

{

	    int len, len2;





		    len = _printf("%s", "This sentence is retrieved from va_args!\n");

		        len2 = printf("%s", "This sentence is retrieved from va_args!\n");

			    fflush(stdout);

			        if (len != len2)

					    {

						            printf("Lengths differ.\n");

							            fflush(stdout);

								            return (1);

									        }

				    return (0);

}
