#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * set_string - Write a function that sets the value of a pointer to a char.
 * @s: destination
 * @to: source
*/
void set_string(char **s, char *to)
{
	int i;

	*s = malloc(strlen(to) + 1);
	for (i = 0; to[i] != '\0'; i++)
	{
		(*s)[i] = to[i];
	}
	(*s)[i] = '\0';
}
