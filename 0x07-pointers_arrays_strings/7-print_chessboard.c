#include "main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: rows
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	int x, b;

	for (x = 0; x < 8; x++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar (a[x][b]);
		}
		_putchar('\n');
	}
}
