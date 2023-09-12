#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory of structure dogs
 * @d: pointer of struct
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
