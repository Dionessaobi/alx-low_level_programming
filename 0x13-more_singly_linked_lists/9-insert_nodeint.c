#include "lists.h"

/**
* insert_nodeint_at_index - Inserts node at a given position
* @head: Pointer to a pointer to a linked list
* @idx: Where the node should be inserted
* @n: The data to be inserted
*
* Return: Address of the new node or NULL at failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int count = 1;
