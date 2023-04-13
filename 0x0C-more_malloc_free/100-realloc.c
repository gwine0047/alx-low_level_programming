#include "main.h"
/**
 * _realloc - reallocates a memory block using
 * malloc and free.
 * @ptr: pointer to the previous memory.
 * @old_size: is the allocated space for ptr.
 * @new_size: is the size of the new memory block.
 * Return:a pointer to the new memory or NULL if failed.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_m;
	unsigned int a = 0, b;
	char *old_m = ptr;

	b = new_size;

	if (ptr == NULL)
	{
		new_m = malloc(new_size);
		return (new_m);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	new_m = malloc(new_size);
	if (new_m == NULL)
		return (NULL);

	if (new_size > old_size)
		b = old_size;

	while (a < b)
	{
		new_m[a] = old_m[a];
		a++;
	}

	free(ptr);
	return (new_m);
}
