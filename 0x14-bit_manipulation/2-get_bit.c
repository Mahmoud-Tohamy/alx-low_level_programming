#include "main.h"

/**
* get_bit - gets the bit at the index
* @n: num to index
* @index: the bit to get
* Return: the bit sate or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & index & 1);
}
