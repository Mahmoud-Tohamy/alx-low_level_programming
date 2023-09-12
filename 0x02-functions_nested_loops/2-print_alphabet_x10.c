#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 * Description: A C program that print _putchar
 * Return: void
*/
void print_alphabet_x10(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
