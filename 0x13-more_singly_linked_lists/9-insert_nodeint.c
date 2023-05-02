#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a given point
 * @head: pointer to 1st node
 * @idx: index where node is to be inserted
 * @n: data to populate new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *ptr;
	unsigned int count;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/*if idx==0 (node added at the begining)*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	ptr = NULL;
	ptr = *head;
	/*traverse the list with ptr till nth node*/
	for (count = 0; count < idx - 1 && ptr != NULL; count++)
	{
		ptr = ptr->next;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
