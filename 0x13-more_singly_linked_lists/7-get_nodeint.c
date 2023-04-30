#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a singly linked list
 * @head: pointer to 1st node
 * @index: number of node to be returned
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	ptr = NULL;
	ptr = head;
	for (count = 0; count < index; count++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}
