#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node -adds node to the begining of the list
 * @head: pointer to 1st node
 * @str: string to be copied to new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = malloc(strlen(str) + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strcpy(new_node->str, str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
