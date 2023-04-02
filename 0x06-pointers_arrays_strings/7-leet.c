#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1337/leet
 * @str: the string to be encoded6-cap_string.c
 * Return: returns the encoded string
 */
char *leet(char *str)
{
	int i;
	int j;

	/**
	 * create 2 strings with the chars that leet encodes. One in caps and
	 * other lower
	 */
	char letter[] = "aeotl";
	char letter1[] = "AEOTL";
	/*create string with the chars that replace the above in leet encoding*/
	char leet[] = "43071";
	/*check whether each letter in the string provided...*/
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0' && letter1[j] != '\0'; j++)
		{
			/*...matches any of those in letter or letter1*/
			if (str[i] == letter[j] || str[i] == letter1[j])
			{
				/*replace matches found with its leet equivalent*/
				str[i] = leet[j];
			}
			else
				continue;
		}
	}
	return (str);
}
