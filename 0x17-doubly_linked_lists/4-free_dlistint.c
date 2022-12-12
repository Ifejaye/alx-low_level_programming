#include "lists.h"

/**
  * free_dlistint - frees a linked list
  * @head: the list to free
  *
  * Return: returns nothing
  */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
