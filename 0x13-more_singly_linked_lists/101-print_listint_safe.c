#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_loop - checks if list has a loop#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_loop - checks if list has a loop
 * @head: pointer to 1st node of list
 * Return: address of the 1st node of the loop. NULL if no loop
 */

const listint_t *find_loop(const listint_t *head)
{
	size_t loop_found;
	const listint_t *fast, *slow, *tmp;

	fast = slow = tmp = head;
	loop_found = 0;
	while (slow != NULL && fast != NULL && fast->next != NULL)
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
 * print_listint_safe - prints a listint_t linked list that may have a loop.
 * @head: pointer to 1st node of the list
 *
 * Description - uses Floyd's loop detection algorithm.
 * Return: number of nodes. 98 if it fails
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp, *looped;
	size_t count;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
	/* 2nd condition is where list has only 1 node referencing itself*/
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (1);
	}
	tmp = head;
	looped = find_loop(head); /*detect the loop if any*/
	if (looped == NULL)	  /*if loop not found*/
	{
		for (count = 0; tmp != NULL; count++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
		}
	}
	else
	{
		for (count = 1; tmp != looped; count++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
		}
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		looped = looped->next;
		for (; tmp != looped; count++)
		{
			printf("[%p] %d\n", (void *)looped, looped->n);
			looped = looped->next;
		}
		printf("-> [%p] %d\n", (void *)looped, looped->n);
	}
	if (count == 0)
		exit(98);
	return (count);
}
 * @head: pointer to 1st node of list
 * Return: address of the 1st node of the loop. NULL if no loop
 */

const listint_t *find_loop(const listint_t *head)
{
	size_t loop_found;
	const listint_t *fast, *slow, *tmp;

	fast = slow = tmp = head;
	loop_found = 0;

	if (head->next->next == head)
	{
		return (head->next);
	}
	while (slow != NULL && fast != NULL && fast->next != NULL)
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
 * print_listint_safe - prints a listint_t linked list that may have a loop.
 * @head: pointer to 1st node of the list
 *
 * Description - uses Floyd's loop detection algorithm.
 * Return: number of nodes. 98 if it fails
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp, *looped;
	size_t count;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (1); }
	looped = find_loop(head); /*detect the loop if any*/
	if (looped == NULL)	  /*if loop not found*/
	{
		for (tmp = head, count = 0; tmp != NULL; count++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
		}
	}
	else
	{
		for (tmp = head, count = 1; tmp != looped; count++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
		}
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		if (count != 2)
		{
			looped = looped->next;
			for (; tmp != looped; count++)
			{
				printf("[%p] %d\n", (void *)looped, looped->n);
				looped = looped->next;
			}
		}
		printf("-> [%p] %d\n", (void *)looped, looped->n);
	}
	if (count == 0)
		exit(98);
	return (count);
}
