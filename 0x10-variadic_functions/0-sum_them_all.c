#include <stdarg.h>

/**
 *sum_them_all -  function that returns the sum of all its,
 *variable  parameters
 *@n: number of parameters
 *Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list tob;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(tob, n);

	for (i = 0; i < n; i++)
		sum += va_arg(tob, int);

	va_end(tob);
	return (sum);
}
