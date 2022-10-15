#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s : pointer to the string
 */

void rev_string(char *s)
{
	int len;
	int count = 0;

	for (len = 0; s[len] != '\0'; len++)
		count++;
	printf("The lenght of string is %d\n", count);

	for (len = count; s[len] >= 0; len--)
	{
		
	}

	_putchar('\n');
}

