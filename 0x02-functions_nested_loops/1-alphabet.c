#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: uses _putchar defined in main.h
 * Return: returns 0 on success
 */
void print_alphabet(void)
	{
		int i;

		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
