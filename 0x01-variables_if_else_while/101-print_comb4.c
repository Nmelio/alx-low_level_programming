#include <stdio.h>

/**
* main - Entry
*
* Desc: Program that prints all possible different combinations of three digits
*
* Return: 0
*/

int main(void)
{
	int k;
	int g;
	int s;

	for (k = 0 ; k < 8 ; k++)
	{
		for (g = k + 1 ; g < 9 ; g++)
		{
			s = g + 1;
			do {
				putchar('0' + k);
				putchar('0' + g);
				putchar('0' + s);
				if (k < 7)
				{
					putchar(',');
					putchar(32);
				}
				s++;
			} while (s < 10);
		}
	}
	putchar('\n');
	return (0);
}
