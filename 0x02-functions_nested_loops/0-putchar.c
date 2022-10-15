#include "main.h"

/**
 * main - a program that prints _putchar, followed by a new line.
 * Return : zero
 */

int main(void)
{
	/*one way of printing out a string*/
	char str[] = "_putchar";
	int count;

	printf("%s\n", str);
	/*trying to print the first five letters of the string*/
	printf("%.5s\n", str);

	/* trying to print the first 5 letters of the string with spaces at the beginning of the line*/
	/* I dont want the printing to start at the beginning if the line*/
	printf("%30.5s\n", str);

	/* trying to print the string with tab space at the front*/
	printf("\t%s\n", str);

	/*another way to print out a string*/
	printf("_putchar\n");

	/*Another way to print with _putchar function*/
	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
