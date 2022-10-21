#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list
* @head: Pointer to pointer to a linked list
* @str: Pointer to a string
*
* Return: Address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int i;

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
