#include <stdio.h>
#include "main.h"
/**
 * _strcatcat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a terminating
 * null byte
 * @dest: pointer to 1st string
 * @src: pointer to 2nd string
 * @n: the number of chars to be copied from src
 * return: returns pointer to resulting string dest
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
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("1%s\n", s1);
    printf("2%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("3%s\n", s1);
    printf("4%s", s2);
    printf("5%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("6%s", s1);
    printf("7%s", s2);
    printf("8%s", ptr);
    return (0);
}