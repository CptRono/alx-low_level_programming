#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: the char that fills the mem area
 * @n: number of bytes to copy
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
