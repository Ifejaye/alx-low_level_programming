#include "lists.h"

/**
  * get_dnodeint_at_index - gets nth node
  * @head: the linked list
  * @index: n
  *
  * Return: returns a node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *my_node = head;

	while (my_node != NULL)
	{
		if (i == index)
			return (my_node);
		else
		{
			i++;
			my_node = my_node->next;
		}
	}
	return (NULL);
}
