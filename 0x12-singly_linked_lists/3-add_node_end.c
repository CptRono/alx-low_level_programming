#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds new node to the end of a list
 * @head: pointer to pointer of the 1st node
 * @str: string to populate the node to be added
 * Return: pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *new_node;

	/*allocate space for the new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*populate the new node with data*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/*set new node as head and return new node if list is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*assign tail the 1st address of the node*/
	tail = *head;
	/*use tail to traverse the list till the end*/
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	/*insert data into the last address*/
	tail->next = new_node;

	return (new_node);
}
