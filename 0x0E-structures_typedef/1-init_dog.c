#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - innitialize a variable of sruct dog
 *
 * @d: pointer to struct dog
 * @name: pointer to character
 * @age: age of dog
 * @owner: pointer to character
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}

}
