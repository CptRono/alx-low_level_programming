#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_loop2 - checks if list has a loop
 * @head: pointer to 1st node of list
 * Return: address of the 1st node of the loop. NULL if no loop
 */

listint_t *find_loop2(listint_t *head)
{
	size_t loop_found;
	listint_t *fast, *slow, *tmp;

	fast = slow = tmp = head;
	loop_found = 0;
	if (head->next->next == head)
	{
		return (head->next);
	}
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
		while (tmp != slow)
		{
			tmp = tmp->next;
			slow = slow->next;
		}
		return (tmp);
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a list that may have a loop
 * @h: pointer to pointer to head node
 * Return: count of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *looped, *tmp;
	size_t count;

	if (*h == NULL)
		return (0);
	looped = find_loop2(*h);
	tmp = *h;
	if (looped == NULL)
	{
		for (count = 0; *h != NULL; count++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		if (*h == looped)
		{
			free(*h);
			*h = NULL;
			return (1);
		}
		for (count = 1; *h != looped; count++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		looped = looped->next;
		for (; *h != looped; count++)
		{
			tmp = looped->next;
			free(looped);
			looped = tmp;
		}
	}
	*h = NULL;
	return (count);
	exit(98);
}
