#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - entry point
 *
 * Description: This function prints the alphabet, in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void);
{
	int ch, f;

	for (f = 0; f < 10; f++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
