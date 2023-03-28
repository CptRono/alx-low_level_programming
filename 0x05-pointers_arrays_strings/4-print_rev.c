#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_rev - reverses strings
 * @s: contains array of chars to be reversed
*/
void print_rev(char *s)
{
	int i = 0;

	/*find length of string*/
	while (s[i] != '\0')
	{
		i++;
	}
	/*print string from the back*/
	for (i-- ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
