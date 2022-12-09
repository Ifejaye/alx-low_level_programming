#include "lists.h"

/**
  * add_dnodeint - adds a new node
  * @head: the head
  * @n: number
  *
  * Return: returns a dll
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new_data = malloc(sizeof(dlistint_t));

	new_data->n = n;
	new_data->next = (*head);
	new_dat->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_data;
	(*head) = new_data;
	return (*head);
}
