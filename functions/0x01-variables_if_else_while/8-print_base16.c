#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase, followed by a new line
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return : zero
 */

int main(void)
{
	int num;
	char letter;
	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
