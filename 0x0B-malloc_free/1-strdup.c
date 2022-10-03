#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: p
 */

char *_strdup(char *str)
{
	int size, i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)

	p = malloc(sizeof(char) * (size));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
