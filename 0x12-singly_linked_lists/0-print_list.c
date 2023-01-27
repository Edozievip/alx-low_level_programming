#include "lists.h"
/**
  * print_list - prints list.
  * @h: param list
  * Return: struct
  */
size_t print_list(const list_t *h)
{
	size_t node1;

	node1 = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node1++;
	}
	return (node1);
}
