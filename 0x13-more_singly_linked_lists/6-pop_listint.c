#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
  * pop_listint - deletes the head node of a linked list
  * @head: linked list
  *
  * Return:returns an integer
  */
int pop_listint(listint_t **head)
{
	int node_int;
	listint_t *current_node;
	listint_t *node_address;

	if (head == NULL)
		return (NULL);

	current_node = *head;
	node_int = current_node->n;
	node_address = current_node->next;
	free(current_node);

	*head = node_address;
	return (node_int);
}
