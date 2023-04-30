#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of a list
 * @head: pointer to pointer to the 1st node
 * @n: data to be added into new node
 * Return: pointer to added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	/*populate the new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	/*if list is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		/*use ptr to traverse list till end*/
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		/*assign the last node the addr of new_node*/
		ptr->next = new_node;
	}
	return (new_node);
}
