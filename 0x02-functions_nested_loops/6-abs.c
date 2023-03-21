#include "main.h"
/**
 * _abs - prints absolute value
 *  @a: parameter
 *  Return: 0 when successful
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;

	return (a);
}
