#include "main.h"

/**
* *_strchr - fille memory with a constant byte.
*
*@s: pointer to put the constant
*@c: constant
*
* Return: the pointer to s
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'  ; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}

	return ('\0');
}

