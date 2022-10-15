#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse, followed by a new line.
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return : zero
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
