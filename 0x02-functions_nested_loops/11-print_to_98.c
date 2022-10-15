#include "main.h"

/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98, followed by a new line.
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 * Return : Nothing.
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)

		for (count = n; count >= 98; count--)
		{
			if (count == 98)
				printf("%d\n", count);
			else
				printf("%d, ", count);

		}

	else if (n < 98)
		for (count = n; count <= 98; count++)
		{
			if (count == 98)
				printf("%d\n", count);
			else
				printf("%d, ", count);
		}
	else
		printf("98\n");
}
