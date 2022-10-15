#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * You can only use _putchar function to print
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * @size : a variable the size of the triangle
 * Return : nothing
 */

void print_triangle(int size)
{
	int len, i, j;
	char print = '#';
	
if (size <= 0)
	_putchar('\n');
else
{
	for (len = 0; len < size; len++)
	{
		for (i = len + 1; i < size; i++)
			_putchar(' ');
		for (j = 0; j <= len; j++)
			_putchar(print);
		_putchar('\n');

	}
}
}
