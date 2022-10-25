#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end -  a function that adds a new node at the end of a listint_t list
  * @head: yhe list
  * @n: data to add to list
  *
  * Return: returns address
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *new;

/*	(void)new;*/

	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
		return (NULL);

	add_new->n = n;
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

