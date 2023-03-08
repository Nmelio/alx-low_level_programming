#include "main.h"
/**
 *_strncpy - function that copies a string
 *
 * @dest: input value
 * @src: input value
 * @n: imput bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (j = 0; (j < n && src[j] != '\0'); j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
