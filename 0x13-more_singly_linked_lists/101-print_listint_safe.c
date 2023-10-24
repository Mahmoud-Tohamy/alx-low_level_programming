#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r reallocates memory for an array ofm  pointers
 * to the nodes in a linked list
 * @list: old list to append
 * @size: size of new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
* print_listint_safe - prints a listint_T LINKED LIST.
* @head: pointer to the start of list
* Return: the num of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (viod *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (viod *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}

/**
 * check_ptr - checks if a pointer is in an array
 * @ptr: pointer to be checked
 * @array: array to be checked in
 * @size: size of the array
 *
 * Return: 1 on success, 0 on fail
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
