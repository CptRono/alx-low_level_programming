#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: str from which a duplicate is to be made
 * Return: pointer to the duplicated string. It returns NULL
 * if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *p;
	int i;
	int j;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p = (char *)malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		p[j] = str[j];
	return (p);
}
