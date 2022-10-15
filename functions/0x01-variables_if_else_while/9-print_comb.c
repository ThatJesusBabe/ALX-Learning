#include <stdio.h>

/**
 * main - a program that prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return : zero
 */

int main(void)
{
	char num;
	int i = '9';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != i)
		{
			putchar(',');
			putchar(' ');
		}
		else
			break;
	}
	putchar('\n');
	return (0);
}
