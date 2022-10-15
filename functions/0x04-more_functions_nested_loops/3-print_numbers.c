#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9, followed by a new line.
 * Use _putchar only twice in the code
 * Return: nothing.
 */

void print_numbers(void)
{
	int count;
	
	for (count = 48; count <= 57; count++)
		_putchar(count);
	_putchar('\n');
}
