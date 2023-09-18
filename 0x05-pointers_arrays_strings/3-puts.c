#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 *@str: pointer to the string to print
 * Return; Nothing
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}