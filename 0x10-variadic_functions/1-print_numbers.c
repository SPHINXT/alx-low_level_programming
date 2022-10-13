#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers arguments
 * @separator: string in between
 * @n: numbers of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list tob;
	unsigned int i;

	va_start(tob, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(tob, int));

		if (i != (n - 1))
		{
			printf("%s ", separator);
		}
		if (i == (n - 1))
			printf("\n");
	}

	va_end(tob) ;
}
