#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog structure
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
