#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all element of dll
 * @h: linked list
 *
 * Return: return number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}