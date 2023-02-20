#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 start from 0
 *
 * Return: 0
 */

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
