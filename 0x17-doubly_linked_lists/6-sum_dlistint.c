#include "lists.h"

/**
  * sum_dlistint - sums the nodes
  * @head: the linked list
  *
  * Return: returns the sum of lists
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *list = head;

	if (head == NULL)
		return (0);
	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}
	return (sum);
}
