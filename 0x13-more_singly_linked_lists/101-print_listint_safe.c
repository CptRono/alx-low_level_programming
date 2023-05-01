#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list that may have a loop.
 * @head: pointer to 1st node of the list
 *
 * Description - uses Floyd's loop detection algorithm.
 * Return: number of nodes. 98 if it fails
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast, *slow, *tmp;
	size_t count, loop_found;

	fast = slow = tmp = head;
	count = 0;
	/*detect the loop if any*/
	loop_found = 0;
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) /*loop detected*/
		{
			loop_found = 1;
			break;
		}
	}
	/*print tail, regardless of whther loop exists or not*/
	/*find the begining of loop while also printing the tail*/
	for (count = 1; tmp != slow && (tmp != NULL || slow != NULL); count++)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		if (slow != NULL)
			slow = slow->next;
	}
	if (loop_found) /*print nodes in loop if loop found*/
	{
		/* first print the node where tmp & slow meet */
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		/*print the remaining part of the loop*/
		slow = slow->next;
		for ( ; slow != tmp; count++)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
		}
		printf("-> [%p] %d\n", (void *)slow, slow->n);
	}
	return (count);
}
