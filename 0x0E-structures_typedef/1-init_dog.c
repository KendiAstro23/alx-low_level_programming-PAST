#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - sets the variable dog as its initial
 * @d: the pointer to dog
 * @name: the dog's name
 * @age: dog's age
 * @owner: owner of the dog
 */
	void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

