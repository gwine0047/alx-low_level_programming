#include "main.h"
/**
* _isalpha - function checks for alphabet
* @c: is parameter
* Return: 1 for alphabet and 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
