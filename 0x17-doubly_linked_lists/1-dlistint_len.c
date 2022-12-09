#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - return lenght of dll
 * @h: dll
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
