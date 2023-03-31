#include <stdio.h>
#include "main.h"
/**
 * _strncat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a terminating
 * null byte
 * @dest: pointer to 1st string
 * @src: pointer to 2nd string
 * @n: the number of chars to be copied from src
 * Return: returns pointer to resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	/*iterate a pointer till it gets to \\0 in the 1st string*/
	while (dest[i] != '\0')
	{
		i++;
	}
/*get value i of last iteration*/
/*use 2nd pointer to get value of 1st index of 2nd string till src(n)*/
/*assign this value to the n index of 1st string*/
/*repeat above while increamenting pointer 1 and 2*/
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
