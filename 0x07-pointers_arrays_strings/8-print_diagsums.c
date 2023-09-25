#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array isquare
 */


void print_diagsums(int *a, int size)
{
	int x, x1 = 0, x2 = 0;

	for (x = 0; x < size; x++)
	{
		x1 += a[x];
		x2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", x1);
	printf("%d\n", x2);
}
