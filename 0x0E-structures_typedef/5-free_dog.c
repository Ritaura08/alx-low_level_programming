#include "dog.h"

/**
 * free_dog - Frees dog struct
 * @d: Dog structure pointer
 */

void free_dog(dog_t *d)
{
	if (d)
	{	
		free(d->name);
		free(d->owner);
		free(d);
	}
}
