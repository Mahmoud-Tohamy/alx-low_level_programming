#include "main.h"
/**
 * _pow_recursion - search a string for any of a set of bytes
 * @x: base
 * @y: exposant
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));

}
