#include "lists.h"
#include <stdio.h>
/**
  * print_list - prints all the elements of a list_t list
  * @h: head
  *
  * Return: returns xize_t
  */
size_t print_list(const list_t *h)
{
	int n = 0;

	if (h == NULL)
		printf("(nil)");
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
return (n);
}
