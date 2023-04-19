#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: contains an address to an array of integers.
 * @size: is the size of the array.
 * @action: is a function pointer.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a = 0;

	if (!(array != NULL || action != NULL))
		return;

	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
