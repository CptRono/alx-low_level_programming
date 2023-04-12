#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int sum;
	char *p;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(2 * sizeof(char));
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; )
		{
			i++;
		}
	}
	if (s2 == NULL)
	{
		s2 = (char *)malloc(2 * sizeof(char));
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; )
			j++;
	}
	sum = i + j + 1;
	p = (char *)malloc(sum * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
		p[k] = s1[k];
	for (k = 0; k <= j; k++)
		p[k + i] = s2[k];
	p[sum - 1] = '\0';
	return (p);
}
