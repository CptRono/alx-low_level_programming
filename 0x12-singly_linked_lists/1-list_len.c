#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to the 1st node
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		/*assign h the value of the next node*/
		h = h->next;
	}
	return (count);
}
