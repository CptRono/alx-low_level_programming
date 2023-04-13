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
	unsigned int a, b, c, len;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*find lengths of s1 & s2 without null terminators*/
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	/*find sum of resulting string*/
	len = (a + (b < n ? b : n));
	/*allocate mem for resulting string including \0 */
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	/*copy first string*/
	for (c = 0; s1[c] != '\0'; c++)
		p[c] = s1[c];
	/*copy 2nd string*/
	for (a = 0; s2[a] != '\0' && a < n; a++, c++)
		p[c] = s2[a];
	p[c] = '\0';
	return (p);
}
