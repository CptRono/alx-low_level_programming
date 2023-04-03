#include "main.h"
#include <stdio.h>
/**
 * _strchr -  function that locates 1st occurence of a char in a string
 * @s: the string to be checked
 * @c: the char to be checked for
 * Return: Returns a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
