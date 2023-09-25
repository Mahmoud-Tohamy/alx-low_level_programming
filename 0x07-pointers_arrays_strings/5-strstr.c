
#include "main.h"
#include <stdio.h>
/**
 * *_strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
int x, b;

for (x = 0; haystack[x] > '\0'; x++)
{
	for (b = x; haystack[b] > '\0' && needle[b - x] > '\0'; b++)
	{
		if (haystack[b] != needle[b - x])
		{
			break;
		}
	}
	if (needle[b - x] == '\0')
	{
		return (haystack + x);
	}
}
return (0);
}
