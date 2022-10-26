#include "lists.h"

/**
* listint_len - Gets the number of elements in a list
* @h: Pointer to a linked list
*
* Return: The number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
