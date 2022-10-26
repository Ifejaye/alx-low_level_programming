#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint - a function that adds a
  * new node at the beginning of a listint_t list
  * @head:the linked list
  * @n: new data to add
  *
  * Return: returns an address or null
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = ((listint_t *) malloc(sizeof(listint_t)));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = *head;
	*head = add_node;
	return (*head);
}
