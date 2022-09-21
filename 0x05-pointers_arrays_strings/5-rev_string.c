#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length, i, middle, len1;
	char temp;

	for (length = 0; s[length] != '\0'; i++)
	middle = length / 2;
	len1 = length - 1;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len1--] = temp;
	}
}
