#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
  * get_nodeint_at_index - returns the nth node of a linked list
  * @head: the list
  * @index: the postion to return
  *
  * Return: returns listint_t
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
