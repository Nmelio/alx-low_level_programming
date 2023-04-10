#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number to look for
 * @index: index starting from 0
 *
 * Return: value of bit (c) at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int c;

	if (index > 63)
	{
		return (-1);
	}

	c = (1 & (n >> index));

	return (c);
}
