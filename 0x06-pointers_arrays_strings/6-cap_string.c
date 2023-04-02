#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalises 1st letter of a word
 * @str: the string that contains words to be capitalised
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		/*Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, }*/
		if (str[i] == ' ' || str[i] == 9 || str[i] == 10 || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			/*when delimitor found, check if next char is a small LETTER. Capitalise*/
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] = str[i + 1] - 32;
		}
		else
			continue;
	}
	return (str);
}