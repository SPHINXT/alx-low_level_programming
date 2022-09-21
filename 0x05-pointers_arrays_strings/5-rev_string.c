#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length, i, middle;
	
	for (i = 0; s[i] != '\0'; i++)
	length = i;
	middle = length / 2;
	char temp;
	
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
