#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - finds length of a string
 * @s: pointer to the string
 * Return: returns string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
