#include "main.h"
#include <stdio.h>
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: pointer to string to be checked
 * @accept: string with acceptable chars
 * Return: returns the number of initial matching chars
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int count;
	int sum;

	sum = 0;
	count = 0;
	/*count how many chars are in 2nd string*/
	while (accept[count] != '\0')
	{
		count++;
	}
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				sum += 1;
				break;
			}
			/*terminate if reached end of accept without match*/
			if (b == count - 1 && accept[b] != s[a])
			{
				return (sum);
				goto end;
			}
		}
	}
end:
	return (sum);
}
