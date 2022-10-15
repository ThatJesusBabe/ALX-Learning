#include <stdio.h>

/**
 * main - a program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * The numbers must be separated by comma,
 * followed by a space.
 * Return : zero
 */

int main(void)
{
	int count;
	int sum[51] = {1, 2};
	int a;
	int b;
	
	printf("%d, %d, ", sum[0], sum[1]);

	for(count = 2; count <= 49; count++)
	{
		a = count - 2;
		b = count - 1;
		sum[count] = sum[a] + sum[b];
		printf("%i, ", sum[count]);
	}
	putchar('\n');
	return (0);
}
