#include "main.h"
/**
 * malloc_checked - This function assigns a memory.
 * @b: integer size.
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
