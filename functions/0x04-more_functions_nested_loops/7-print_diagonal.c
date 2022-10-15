#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * You can only use _putchar function to print
 * @n : is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return : nothing
 */

void print_diagonal(int n)
{
	int count, space_len;
	char value = '\\';
	if ((n < 0) || (n == 0))
		_putchar('\n');
	else
	{
		for (count = 0; count < n; count ++)
		{
			for (space_len = 0; space_len < count; space_len++)
				_putchar(' ');
			_putchar(value);
			_putchar('\n');
		}
	}
}
