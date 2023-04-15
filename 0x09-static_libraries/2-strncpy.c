#include <stdio.h>
#include "main.h"
/**
 * _strncpy - function that copies a string.  works exactly like strncpy
 * @dest: pointer to 1st string
 * @src: pointer to 2nd string
 * @n: the number of chars to be copied from src
 * Return: returns pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	/*iterate a pointer till it gets to \\0 in the 2nd string*/
	while (src[i] != '\0')
	{
		i++;
	}
	/*replace the 1st value of 1st string with 1st value of 2nd string*/
	/*repeat*/
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	if (n >= i)
		dest[i] = '\0';
	return (dest);
}
