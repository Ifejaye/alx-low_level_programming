#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node - a function that adds a
  * new node at the beginning of a listint_t list
  * @head:the linked list
  * @str: new data to add
  *
  * Return: returns an address or null
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;

	add_node = ((list_t *) malloc(sizeof(list_t)));
	if (add_node == NULL)
		return (NULL);
	add_node->str = strdup(str);
	add_node->next = *head;
	*head = add_node;
	return (*head);
}
