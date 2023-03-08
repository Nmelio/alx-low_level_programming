#include "main.h"
/**
 * A function that concatenates two strings
 *
 * Returns: *dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	for(i = 0; dest[i] != '\0'; i++)
	{
	}

	for(j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
