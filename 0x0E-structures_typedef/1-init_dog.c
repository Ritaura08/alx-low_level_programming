#include "dog.h"
/**
  * init_dog - dog information
  * @d: pointer to dog structure
  * @name: pointer to dog name
  * @age: dog age
  * @owner: pointer to dog owner
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

