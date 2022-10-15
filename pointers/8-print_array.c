#include "main.h"

/**
 * print_array - prints elements of arrays of integer
 * @n : numbers of element of arrays
 * @a : pointer variable
 * Return : zero
 */

void print_array(int *a, int n)
{
	int i;
	int count;;
	for (i = 0; i != '\0'; i++)
		count++;
	n = count;

	for (i = 0; a[i] <= n ; i++)
	{
		if (i != n)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a +  i));
	}
	printf("\n");
}
