#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all element of dll
 * @dlistint: linked list
 *
 * Return: return number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->data);
		count++;
		head = head->next;
	}
	return (count);
}
