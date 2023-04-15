#include "main.h"
/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: string to be printed
*/
void _puts(char *str)
{
	int i;

	for (i = 1; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
