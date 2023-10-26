#include "mani.h"

/**
* get_endianness - prog checks the endianness
* Return: 0 if big endian, 1 if small
*/
int get_endianness(void)
{
	int a;
	chat *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
