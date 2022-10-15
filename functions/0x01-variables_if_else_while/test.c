#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1, num2, mul;

	for(num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			mul = num1 * num2;

			if (mul >9)
			{
				putchar((mul / 10) + '0');
				putchar((mul % 10) + '0');
			}
			else
				putchar(mul + '0');

			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
