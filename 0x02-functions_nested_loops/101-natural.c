#include <stdio.h>

/**
 * main - if we list all the natural numbers below 10
 * that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23
 * Write a program that computes and prints
 * the sum of all the multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 * Return : zero.
 */

int main(void)
{
	int count;
	int mul3;
	int mul5;
	int sum = 0;

	for (count = 0; count < 1024; count++)
	{
		mul3 = count % 3;
		mul5 = count % 5;


		if ((mul3 == 0) || (mul5 == 0))
			sum = sum + count;
	}
	printf("The sum of all the multiples of 3 or 5 below 1024 is %d", sum);
	putchar('\n');
	return (0);
}
