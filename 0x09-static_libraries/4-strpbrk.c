#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int x, b;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[x])
			{
				p = &s[x];
				return (p);
			}
			b++;
		}
		x++;
	}

	return (0);
}
