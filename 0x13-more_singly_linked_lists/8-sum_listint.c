#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * sum_listint -  returns the sum of all the data (n) of a linked list
  * @head: the linked list
  *
  * Return: returns sum of element
  */
int sum_listint(listint_t *head)
{
	int val, sum = 0;

	while (head != NULL)
	{
		val = head->n;
		sum = sum + val;
		head = head->next;
	}
	return (sum);
}
