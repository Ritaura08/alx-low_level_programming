#include "dog.h"

/**
 * free_dog - Entry
 * @d: Dog structure pointer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

		free(d->name);
		free(d->owner);
		free(d);
}
