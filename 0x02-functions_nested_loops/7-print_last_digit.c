#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of a no
 * Return: returns last digit
 * @i: number for which last dgt is to be found
 */
int print_last_digit(int i)
{
	if (i == 0)
	{
		printf("%d", i);
		return (0);
	}
	else
	{
	    int x;
		x = (i % 10);
		printf("%d", x);
		return (x);
	}
}
