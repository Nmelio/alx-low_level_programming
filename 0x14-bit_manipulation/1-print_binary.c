#include "main.h"

/**
 * print_binary - binary equivalent of a decimal print
 *
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int num = 0;
	int loop = 63;
	unsigned long int current;

	while (loop >= 0)
	{
		current = n >> loop;

		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
		loop--;
	}
	if (!num)
		_putchar('0');
}
