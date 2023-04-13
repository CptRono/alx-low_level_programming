#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: number of arguments (same as argc)
 * @av: pointer to pointer to an array of stings (i.e 2D array of sttrings)
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *p;
	int len;

	len = 0;
	if (av == NULL || ac == 0)
		return (NULL);
	/*find sum of lengths of each string . to be used in malloc*/
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
			len += 1;
		/*account for newline char to be attached after each string*/
		len++;
	}
	/*for null terminator*/
	len++;
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);

	/*copy strings into p*/
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			p[i] = av[j][k];
			i++;
		}
		p[i] = '\n';
		i++;
	}
	p[i] = '\0';
	return (p);
}
