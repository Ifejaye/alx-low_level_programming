#include "lists.h"

/**
  * add_dnodeint_end - adds a node at the end
  * @head: the end of dll
  * @n: new data to add
  *
  * Return: returns a list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_data;
	dlistint_t *list;
	
	new_data = malloc(sizeof(dlistint_t));
	if (new_data == NULL)
		return (NULL);
	new_data->n = n;
	new_data->next = NULL;
	if (*head == NULL)
	{
		new_data->prev = NULL;
		*head = new_data;
		return (*head);
	}
	list = *head;
	while (list->next != NULL)
		list = list->next;
	list->next = new_data;
	new_data->prev = list;
	return (list);
}
