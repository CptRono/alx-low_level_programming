#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to pointer to 1st node
 * Return: pointer to 1st node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_ptr, *prev;

	/*where list is empty of has 1 node*/
	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	next_ptr = prev = NULL;
	next_ptr = *head;
	while (*head != NULL)
	{
		if (prev != next_ptr && prev != *head)
		/*after last node is reversed, head & nextptr will be same*/
		{
			if ((*head)->next != NULL)
				next_ptr = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next_ptr;
		}
		else
			return (*head);
	}
	return (*head);
}
