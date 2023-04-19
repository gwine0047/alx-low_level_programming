#include "function_pointers.h"
/**
 *int_index -looks for an integer
 * @array: holds the address to an int array.
 * @size: is the element count in the array.
 * @cmp: is a pointer to the function to be used
 * to compare values.
 * Return: 1 if successful or 0 if not.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && cmp)
	{

		while (a < size)
		{
			if (cmp(array[a]) != 0)
				return (a);
			a++;
		}
	}
	return (-1);
}
