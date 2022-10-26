#include "lists.h"

/**
* free_listint2 - Frees list
* @head: Pointer to a pointer to linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == 0 || *head == 0)
		return;
	while (*head != 0)
	{
		temp = *head;
		*head = (*(head))->next;
		free(temp);
	}
	*head = NULL;
}
