#include "lists.h"

/**
  * insert_dnodeint_at_index - adds a node at n
  * @h: linked list head
  * @idx: index
  * @n: data
  *
  * Return: returns new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *new_h = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	for ( i = 0; new_h != NULL && i < idx - 1; i++)
		new_h = new_h->next;
	new_node->next = new_h->next;
	new_h->next = new_node;
	new_node->next->prev = new_node;
	new_node->prev = new_h;
	return (new_h->next);
}
