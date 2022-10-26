#include "lists.h"

/**
* add_nodeint_end - Adds new node at end of list
* @head: Pointer to pointer to a linked list
* @n: The number to add
*
* Return: The address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;
	if (*head == 0)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != 0)
			temp = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
