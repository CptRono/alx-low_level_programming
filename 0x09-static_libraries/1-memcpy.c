#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that fills memory with a constant byte.
 * @dest: memory area to be filled
 * @src: the string array that fills the mem area
 * @n: number of bytes to copy
 * Return: Returns a pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
