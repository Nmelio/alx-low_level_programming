#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @x: pointer to imputed array
 *
 * Return: x
 */

char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] -= 32;
		}
	}
	return (x);
}
