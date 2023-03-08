#include "main.h"
/**
 * reverse_array - function that reverses array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int xx;
	int xy;

	for (xx = 0; xx < n--; xx++)
	{
		xy = a[xx];
		a[xx] = a[n];
		a[n] = xy;
	}
}
