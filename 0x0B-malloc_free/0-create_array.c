#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 *and initializes it with a specific char
 * @size: size of array
 * @c: character to be intialized with
 * Return: pointer to p
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	p[i] = '\0';

	return (p);
}
