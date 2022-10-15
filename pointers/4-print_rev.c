#include "main.h"

/**
 * print_rev - prints a string in a reverse, followed by a newline
 * @s : variable
 * Return : zero
 */

void print_rev(char *s)
{	
	int len;
	int count = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		count++;
	}
 	printf("String lenght is %d\n", count);
	for (len = count; s[len] >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}

