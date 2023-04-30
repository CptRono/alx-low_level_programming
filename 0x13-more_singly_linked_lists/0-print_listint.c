#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int count;

	if (h = NULL)
		return 0;
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
