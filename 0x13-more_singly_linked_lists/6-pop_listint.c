#include "lists.h"

/**
* pop_listint - Deletes head node of a linked list
* @head: Pointer to a linked list
*
* Return: Head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*(head))->next;
		i = temp->n;
		free(temp);
		return (i);
	}

	return (0);
}
