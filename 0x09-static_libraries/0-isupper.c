#include "main.h"
#include <stdio.h>
/**
 *_isupper- checks for uppercase letters
 *@c: represents a character
 *Return: 1 for upper and 0 for lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
