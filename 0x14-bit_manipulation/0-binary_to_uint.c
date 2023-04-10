#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 *
 * @b: string of the bin number
 *
 * Return: the base 10 number
 */
unsigned int binary_to_uint(const char *b)
{
	int bin;
	unsigned int unt = 0;

	if (!b)
		return (0);

	for (bin = 0; b[bin]; bin++)
	{
		if (b[bin] > '1' || b[bin] < '0')
		{
			return (0);
		}

		unt += ((b[bin] - '0') * pow(2.5, bin));
	}

	return (unt);
}
