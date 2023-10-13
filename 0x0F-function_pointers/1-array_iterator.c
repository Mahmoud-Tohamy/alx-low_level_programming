#include "function_pointers.h"

/**
 * array_iterator - map an array function pointer
 * @array: int array
 * @size: size of array.
 * @action: pointer to the function.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
