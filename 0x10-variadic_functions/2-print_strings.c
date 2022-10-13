#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: string in between
 * @n: no of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list tob;
	unsigned int i;
	char *str;

	va_start(tob, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(tob, char*);

		if (str == NULL)
			printf("nil");
		if (i != (n - 1))
		{
			printf("%s", str);

			if (separator != NULL)
			printf("%s", separator);
		}

		if (i == (n - 1))
			printf("%s\n", str);
	}

	va_end(tob);
}
