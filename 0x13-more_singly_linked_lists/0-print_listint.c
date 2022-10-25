#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_listint - a function that prints all the elements of a listint_t list
  * @h: the linked list
  *
  * Return: returns number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
