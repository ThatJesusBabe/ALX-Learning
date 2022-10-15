#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three
 * print Fizz instead of the number and for the multiples
 * of five print Buzz. For numbers which are multiples
 * of both three and five print FizzBuzz.
 * Each number or word should be separated by a space.
 * You are allowed to use the standard library.
 * Return : zero.
 */

int main(void)
{
	int n, mul_3, mul_5;
	char str1[] = "Fizz";
	char str2[] = "Buzz";

	for (n = 1; n <= 100; n++) /* This is to count 1 to 100 */
	{
		mul_3 = n % 3; /* to get the number that is amultiple of 3 */
		mul_5 = n % 5; /* to get the number thet is a multiple of 5*/
		
		if ((mul_3 == 0) && (mul_5 == 0)) /* what to print if the number is both a multiple of 3 and 5 */
			printf("%s%s ", str1, str2);

		if (mul_3 == 0) /* what to print if the number is a multiple of 3*/
		{
			if (mul_3 == mul_5) /* if the number is multiple of 3 and 5, it will not print anything*/
				;
			else
				printf("%s ", str1); /* what to print if the number is only a multiple of 3*/
		}

		else if (mul_5 == 0) /* what to print when the number is both multiples of 3 and 5*/
		{
			if (mul_5 == mul_3) /* it will print nothing when the number is both multiples of 3 and 5*/
				;
			else
			printf("%s ", str2); /*what to print when the number is only a multiple of 5*/
		}
		else /*if the number is neither a multiple of 3 or 5*/
			printf("%d ", n);
	}
	putchar('\n');
	return (0);
}

