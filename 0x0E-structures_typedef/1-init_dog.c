#include "dog.h"

/**
 * init_dog - the function that contains the structure
 * @d: a pointer that to d address
 * @name: contain the dog's name
 * @age: the age of the dog
 * @owner: this is the dog's owber
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
