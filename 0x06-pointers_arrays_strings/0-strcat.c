#include "main.h"
/**
 * A function that concatenates two strings
 *
 * Returns: Char
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	for(i = 0; dest[i] != '\0'; i++)
	{
	}

	for(j = 0; src[j] != '\0'; j++)
	{
	}

	k = i + j + 1;

	for(; i < k; i++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[k] = '\0';
	return *dest;
}
