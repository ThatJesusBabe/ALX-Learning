#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
