#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index
  * @head: tge linked list
  * @index: positon for insertion.
  *
  * Return: returns an integer
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *next;

	current = *head;

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	while (current->next != NULL && i != 0)
	{
		current = current->next;
	}
	if (index != 0)
	{
		current->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
	if (current == NULL || index <= 0)
		return (-1);

	*head = current;
	return (1);
}
