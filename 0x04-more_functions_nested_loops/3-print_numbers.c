#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints 1 to 9
 * Return: returns 0 when successful
 * srand - random numbers
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
}
