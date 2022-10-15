#include "main.h"

/**
 * print_number - a functio that prints and integer
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * @n  - integer to be printed
 * Return - nothing
 */

void print_number(int n)
{
	int x, y, z, a; /* variables to be used */


	if ((n >= -9) && (n <= 9)) /* for integer numbers between the range of -9 to 9 */
	{
		if (n < 0)
		{
			n = n * (-1);
			_putchar('-');
			_putchar(n + '0');
		}
		else
			_putchar(n + '0');
	}

	else if (((n >= -99) && (n <= -10)) || ((n >= 10) && (n <=99))) /* for numbers in the range of -99 to -10 and 10 to 99 */
	{
		x = n / 10;
		y = n % 10;

		if (n < 0) /* to remove the negative sign from tne input number if it is a negative number, because you wont be able to divide and print a negative number*/
		{
			x = x * (-1);
			y = y * (-1);
		}

		if (n < 0) /* to print the negative number separately by first printing out the minus sign, then followed by the digits of the number. you cant print the all of them together at the same time using _putchar or putchar function */
		{
			_putchar('-');
		}
/* to print the digits of the number whether it is negative or positive*/
		_putchar(x + '0');
		_putchar(y + '0');
	}

	else if (((n >= 100) && (n < 999)) || ((n >= -999) && (n <= -100 ))) /* This is to satisfy the condition that the number to be printed is with the range of -999 to -100 and 100 to 999 */
	{
		x = n / 100;
		y = (n % 100) / 10;
		z = (n % 100) % 10;

		if (n < 0) /* to remove the negative sign from tne input number if it is a negative number, because you wont be able to di    vide and print a negative number*/
		{
			x = x * (-1);
			y = y * (-1);
			z = z * (-1);
			_putchar('-'); /* to print the negagive sign before printing the number */
		}

		/* to print the digits of the number, whether it is positive or negative */
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar(z + '0');
	}

	else if ((n > 999) || (n < -999)) /* if the number to be printed is within the range from 999 upward and -999 upward (i.e -1000, -1001, etc) */
	{
		a = n / 1000; /* The multiple integers cannot be print at once by the use of _putchar(putchar) function, so the multiple integers are broken in to single digits. */
		x = (n / 1000) / 100;
		y = (n % 100) / 10;
		z = (n % 100) % 10;
		
		if (n < 0) /* this is applicable to only negative numbers */
		{
			a = a * (-1); /* to remove the minue sign before the printing because, because the minus sign cannot be printed withe number at the same time when using _putchar(putchar) function. */
			x = x * (-1);
			y = y * (-1);
			z = z * (-1);
			_putchar('-'); /* To print the minus sign for the negative number */
		}
		_putchar(a + '0');
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar(z + '0');
	}

	_putchar('\n');

}
