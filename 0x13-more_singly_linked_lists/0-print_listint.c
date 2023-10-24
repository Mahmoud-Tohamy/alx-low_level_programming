#include "lists.h"

/**
* print_listint - prints the linked list
*
* @h: pointer to size of node
*
* Return: size of list
*/
size_t print_listint(const listint_t *h)
{
		size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
