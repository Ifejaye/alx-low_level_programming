#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - a function that returns the
  * number of elements of a listint_t list
  * @h: the linked list
  *
  * Return: returns number of nodes
  */
size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
