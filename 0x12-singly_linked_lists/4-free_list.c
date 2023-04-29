#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
void free_list(list_t *head)
{
	list_t *tmp;
	while (head != NULL)
	{
		/*assign tmp the next addr since it will be cleared*/
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
