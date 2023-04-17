#include "dog.h"

/**
 * free_dog - frees space allocated
 *
 * @d:dog features
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
