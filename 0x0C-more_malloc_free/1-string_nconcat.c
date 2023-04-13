#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: 2nd string
 * @n: number of chars to be copied from s2
 * Return: pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *p;

	if (s1 == NULL)
	{
		s1[0] = '\0';
		a = 0;
	}
	if (s2 == NULL)
	{
		s2[0] = '\0';
		b = 0;
	}
	/*find lengths of s1 & s2 without null terminators*/
	for (a = 0; s1[a] != '\0';)
		a++;
	for (b = 0; s2[b] != '\0';)
		b++;
	/*allocate mem for 1st string*/
	p = malloc(a * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (c = 0; s1[c] != '\0'; c++)
		p[c] = s1[c];
	/*allocate mem for concat string. add 1 for null terminator*/
	if (n <= b)
	{
		p = realloc(p, (a + n + 1) * sizeof(char));
		for (a = 0; a < n; a++, c++)
			p[c] = s2[a];
	}
	else if (n > b)
	{
		p = realloc(p, (a + b + 1) * sizeof(char));
		for (a = 0; s2[a] != '\0'; a++, c++)
			p[c] = s2[a];
	}
	p[c] = '\0';
	return (p);
}
