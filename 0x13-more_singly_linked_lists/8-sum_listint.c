#include "lists.h"

/**
* sum_listint - Adds all the data of a linked list
* @head: Pointer to linked list
*
* Return: The sum of the data
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == 0)
		return (0);
	temp = head;
	while (temp->next != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
