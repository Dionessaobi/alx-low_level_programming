#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a linked list
* @head: Pointer to a linked list
* @index: Index of the node
*
* Return: The nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0, i = 0;
	listint_t *temp;

	if (head == 0)
		return (NULL);
	temp = head;
	while (temp->next != 0)
	{
		temp = temp->next;
		count++;
	}
	if (index > count)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
