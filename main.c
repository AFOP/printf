#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"


	/**
	 *
	 *  * main - Entry point
	 *
	 *   *
	 *
	 *    * Return: 0 on success, error code otherwise
	 *
	 *     */

	int main(void)

	{

			int len, len2;



				len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
				printf("%d", len);

					len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
						printf("%d", len2);
						fflush(stdout);

							if (len != len2)

									{

												printf("Lengths differ.\n");

														fflush(stdout);

																return (1);

																	}

								return (0);

	}



