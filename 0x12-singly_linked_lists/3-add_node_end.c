#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list
* @head: Pointer to pointer of a linked list
* @str: Pointer to a string
*
* Return: Address of the new element or NULL at failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t)), *temp;
	int i;

	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	new->next = 0;
	new->str = strdup(str);
	new->len = i;

	return (new);
}
