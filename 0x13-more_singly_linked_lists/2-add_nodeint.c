#include "lists.h"

/**
* add_nodeint - add a new node at the beginning of a list
* @head: Pointer to a pointer to a linked list
* @n: The number to add
*
* Return: Address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
