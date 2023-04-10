#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: 1st integer
 * @m: 2nd integer
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t = 0;
	int x = 63;
	unsigned long int u;
	unsigned long int v;

	u = n ^ m;

	while (x >= 0)
	{
		v = u >> i;
		if (1 & v)
		{
			t++;
		}
		x--;
	}

	return (t);
}
