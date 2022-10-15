#include "main.h"

/**
 * more_numbers - Write a function that prints
 * 10 times the numbers, from 0 to 14, followed by a new line.
 * Use _putchar only thrice in the code
 * Return: nothing.
 */

void more_numbers(void)
{
int count, i;
char a;

for (i = 0; i < 10; i++)
{
	for (count = 48; count <= 57; count++)
	{
		_putchar(count);
	}
	for (a = 'a'; a <= 'f'; a++)
		_putchar(a);
        _putchar('\n');
}
}

