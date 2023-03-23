#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_line - draws a line in the terminal.
 * @n: no. of '_' to be used in the line
 */
void print_line(int n)
{
	for ( ; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
