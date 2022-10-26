#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list
  * @head: yhe list
  * @str: data to add to list
  *
  * Return: returns address
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_new;
	list_t *new;


	add_new = malloc(sizeof(list_t));
	if (add_new == NULL)
		return (NULL);

	add_new->str = strdup(str);
	add_new->next = NULL;
	new = *head;
	if (*head == NULL)
		*head = add_new;
	else
	{
		while (new->next != NULL)
			new = new->next;
		new->next = add_new;
	}
	return (*head);
}

