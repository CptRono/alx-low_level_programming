#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to pointer to 1st node
 * @index: position of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *tmp;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = NULL;
	ptr = *head;

	/*case where index is 0 (1st node) */
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
	}
	else
	{
		/*traverse the list using ptr*/
		for (count = 0; ptr != NULL && count < index; count++)
		{
			if (count == index - 1)
				tmp = ptr;
			ptr = ptr->next;
		}

		tmp->next = ptr->next;
		free(ptr);
	}
	return (1);
}
