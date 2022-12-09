#include <stdio.h>
#include "lists.h"

/**
 * size_t dlistint_len - prints all element of dll
 * @dlistint: linked list
 *
 * Return: return number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
