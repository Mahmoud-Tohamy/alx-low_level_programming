#include "mani.h"

/**
* get_endianness - return the endianness of system
* Return: 0 if big endian, 1 if small
*/
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
