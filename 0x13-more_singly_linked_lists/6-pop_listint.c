#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to 1st node
 * Return: returns head node's data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);
	/*access node using ptr by assigning it addr in head*/
	ptr = NULL;
	ptr = *head;
	n = ptr->n;
	/*assign head address of next node*/
	*head = ptr->next;
	/*free current node*/
	free(ptr);
	return (n);
}
