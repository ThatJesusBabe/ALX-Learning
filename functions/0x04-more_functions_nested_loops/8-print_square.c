#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * You can only use _putchar function to print
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * Return - nothing.
 */

void print_square(int size)
{
	int i, j; char value;
	
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				value = '#';
				_putchar(value);
			}
			_putchar('\n');
		}
		
	}
}
