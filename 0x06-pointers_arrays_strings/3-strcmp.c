#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares 2 strings. works exactly like strcmp
 * @s1: 1st string
 * @s2: 2nd string
 * Return: returns 15 if s1 is greater, -15 if s2 is greater and 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/*point at nth (i in this case) char of both strings*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		/*compare both nth values in both strings*/
		/*if equal, point to the next and repeat*/
		if (s1[i] == s2[i])
		{
			return (0);
			continue;
		}
		else
		{
			/*if s1[n] is greater than s2[n], return +ve*/
			if (s1[i] > s2[i])
				return (15);
			/*return -ve if opposite*/
			else
				return (-15);
			break;
		}
	}
}
