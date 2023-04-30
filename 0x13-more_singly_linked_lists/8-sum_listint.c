#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns sum of n in the listint_t linked list
 * @head: pointer to the 1st node
 * Return: sum of n in each node
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	if (head == NULL)
		return(0);
	ptr = NULL;
	ptr = head;
	sum = 0;

	while(ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
