/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
		dest[a]= src[a];
	while (a < n)
		dest[a++] = '\0';
	return (dest);
}
