#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * rev_string - reverses characters in an array
 * @s: stores the string
 */
void rev_string(char *s)
{
	int a;
	int temp;

	/*find length of string*/
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	/*swap characters on opposite ends of the half mark*/

	for (int j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}

