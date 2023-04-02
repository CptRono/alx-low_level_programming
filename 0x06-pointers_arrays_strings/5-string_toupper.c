#include <stdio.h>
#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @str: the string to be changed
 * Return: returns the modified string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(str[i] > 96 && str[i] < 122))
			continue;
		str[i] = str[i] - 32;
	}
	return (str);
}
