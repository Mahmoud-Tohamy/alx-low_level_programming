#include "holberton.h"
/**
 * flip_bits - return num of bits that would need to be flipped to
 * transform one num to another
 * @n: first num
 * @m: second num
 * Return: number of bit flip to convert num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);

}
