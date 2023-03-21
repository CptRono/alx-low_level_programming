#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase
 * Return: returns 0 on success
 */
void print_alphabet_x10(void)
{
	int d;

	for (d = 1; d < 11; d++)
	{
		int i;

		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
}
