#include "main.h"
/**
 * _strspn - gets the length of a prefix sub string
 *
 * @s: string to be assessed.
 *@accept: This contains the characters to be matched in 's'.
*
* Return: This function returns the size of bytes 
* in 's' that matches the bytes in the 'accept'.
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int same, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		same = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				same = 1;
			}
		}
		if (same == 0)
		{
			return (c);
		}
	}
	return (0);
}
