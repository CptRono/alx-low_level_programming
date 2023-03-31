#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _strcat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a terminating
 * null byte
 * @dest: pointer to 1st string
 * @src: pointer to 2nd string
 * Return: returns pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
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
/*use 2nd pointer to get value of 1st index of 2nd string TILL \\0 is reached*/
/*assign this value to the n index of 1st string*/
/*repeat above while increamenting pointer 1 and 2*/
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
