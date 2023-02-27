/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	for (b = 0; dest[b] != '\0'; b++);

	while (src[a] != '\0' && a < n)
	{
		dest[b + a] = src[a];
		a++;
	}
	return (dest);
}
