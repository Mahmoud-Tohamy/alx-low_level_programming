#include "main.h"
/**
 *main -Entery point
 *
 *Description: prints _putchar using putchar prototype
 *
 *Rethurn: Always 0 (Success)
*/

int main (void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	retunr (0);
}
