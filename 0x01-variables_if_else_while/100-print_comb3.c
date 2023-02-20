#include <stdio.h>

/**
* main - Entry
*
* Desc: program that prints all possible different combinations of two digits
*
* Return: 0
*/

int main(void)
{
	int k;
	int g;

	for (k = 0 ; k < 9 ; k++)
	{
		g = k + 1;
		do {
			putchar('0' + k);
			putchar('0' + g);

			if (k < 8)
			{
				putchar(',');
				putchar(32);
			}
			g++;
		} while (g < 10);
	}
	putchar('\n');
	return (0);
}
