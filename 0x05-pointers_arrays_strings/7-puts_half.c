#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: var that stores the string
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i - 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
