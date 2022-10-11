#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated for dog
 * @d: pointer to memory location
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
