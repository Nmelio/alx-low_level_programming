#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: pointer to number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y = 1UL;

	if (index > 63)
	{
		return (-1);
	}

	*n = (*n | (y << index));

	return (1);
}
