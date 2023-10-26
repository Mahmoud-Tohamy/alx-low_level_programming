#include "main.h"

/**
* binary_to_uint - converts a binary num string to usigned int
* @b: the binary num as a string
* Return: the usingned int form of b
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
