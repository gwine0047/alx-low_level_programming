#include "main.h"
/*_memset - is a function that fills memory with a constant byte i.e.specified values.
 *
 *@s: is the pointer to the address to be filled.
 *@n: the amount to be altered, in bytes.
 *@b: is the value to be added.
 * 
 *Return: altered array together with added bytes.
 */
char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		str[i] = b;
	}
	return (str);
}
