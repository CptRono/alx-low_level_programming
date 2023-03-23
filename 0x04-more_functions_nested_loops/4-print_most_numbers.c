#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints 1-9 except 2,4
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
