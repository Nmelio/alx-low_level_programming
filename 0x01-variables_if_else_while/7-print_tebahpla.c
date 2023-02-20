#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char g = 'z';

	while (g >= 'a')
	{
		putchar(g);
		g--;
	}
	putchar('\n');
	return (0);
}
