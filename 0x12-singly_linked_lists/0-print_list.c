#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elements of a singly linked list
 * @h: pointer to the 1st node of the list
 * Return: retuns number of nodes
*/
size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h->next != NULL; count++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	/*print last node also*/
	printf("[%d] %s\n", h->len, h->str);
	return (count);
}
