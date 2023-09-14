#include "main.h"

/**
 *print_square - prints squares
 *@size: parameter
 *Return: Always 0 (success)
*/

void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (cloumn = 1; cloumn <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
