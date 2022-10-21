#include "lists.h"

/**
* print_list - Prints all the elements of a list
* @h: Pointer to a linked list
*
* Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
