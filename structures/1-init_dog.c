#include "dog.h"

/**
 * init_dog - initiating a structure variable
 * @d : pointer to the structure variable.
 * @name : member element of the struct.
 * @age : member element of the struct
 * @owner : memeber element of the struct.
 * Return : nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d-> = owner;
	}
}
