#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct variable element
 * @d : the pointer to the struct variable
 * If an element of d is NULL, print (nil) instead of
 * this element. (if name is NULL, print Name: (nil)).
 * If d is NULL print nothing.
 * Return : nothing
 */

void print_dog(struct dog *d)
{
	if (d -> name != NULL)
		printf("Name : %s\n", d -> name);
	else
		printf("Name : (nil)");
	printf("Age : %f\n", d -> age);
	printf("Owner : %s\n", d -> owner);

	if (d -> age != 0)
		printf("Age : %f\n", d -> age);

	else
		printf("Age : (nil)\n");
