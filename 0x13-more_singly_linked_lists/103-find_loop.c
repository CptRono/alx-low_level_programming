#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - checks if list has a loop
 * @head: pointer to 1st node of list
 * Return: address of the 1st node of the loop. NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	size_t loop_found;
	listint_t *fast, *slow;

	fast = slow = head;
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
	if (loop_found)
	{
		while (head != slow)
		{
			head = head->next;
			slow = slow->next;
		}
		return (head);
	}
	return (NULL);
}
