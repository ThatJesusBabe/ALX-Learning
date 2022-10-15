#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str : pointer to string.
 */

void puts_half(char *str)
{
	int len, count = 0, half;

	for (len = 0; str[len] != '\0'; len++)
		count++;

	if (count % 2 == 0)
	{
		half = count / 2;
		for (len = half; str[len] != '\0'; len++)
			_putchar(str[len]);
	}
	else
	{	half = (count - 1) / 2;
		for (len = half; str[len] != '\0'; len++)
			_putchar(str[len]);
	}
	
	_putchar('\n');
}

