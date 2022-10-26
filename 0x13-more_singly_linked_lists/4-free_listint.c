#include "lists.h"

/**
* free_listint - Frees listint_t
* @head: pointer to a linked list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
