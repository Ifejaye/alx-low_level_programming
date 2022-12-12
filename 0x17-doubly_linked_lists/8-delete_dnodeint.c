#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node
  * @head: dll
  * @index: index
  *
  * Return: returns 1 or -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *del_node = *head;

	if (index > 0)
	{
		for (i = 0; i < index; i++)
			del_node = del_node->next;
	}
	if (del_node->next != NULL && del_node->prev != NULL)
	{
		del_node->prev->next = del_node->next;
		del_node->next->prev = del_node->prev;
		free(del_node);
	}
	else if (del_node->next != NULL && del_node->prev == NULL)
	{
		*head = del_node->next;
		del_node->next->prev = NULL;
		free(del_node);
	}
	else if (del_node->next == NULL && del_node->prev != NULL)	
	{
		del_node->prev->next = del_node->next;
		free(del_node);
	}
	else if (del_node->next == NULL && del_node->prev == NULL)
	{
		free(del_node);
	}
	if (del_node)
		return (-1);
	return (1);
}
