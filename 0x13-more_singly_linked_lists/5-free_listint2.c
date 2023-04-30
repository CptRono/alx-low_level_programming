#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list and sets head to null
 * @head: pointer to 1st node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *ptr;

	if (head != NULL)
	{
		ptr = *head;
		while (ptr != NULL)
		{
			tmp = ptr->next;
			free(ptr);
			ptr = tmp;
		}
		*head = NULL;
	}
}
