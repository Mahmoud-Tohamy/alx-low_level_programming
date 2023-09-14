#include "main.h"
#include <stdio.h>

/**
  * print_square -  checks for a digit
  * @size: The character to be checked
  *
  * Return: Always 0
  */
void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size > 0)
	{
		while (x < size)
		{
			while (y < size)
			{
				_putchar('#');
				y++;
			}
		y = 0;
		x++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
