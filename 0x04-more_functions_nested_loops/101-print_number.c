#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_number - prints an integer
 * @n: the integer
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		/*print the sign and make n absolute*/
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 10; (n / i) > 9; i = i * 10)
		;
	for (; i != 1; i = i / 10)
	{
		_putchar((n / i) + '0');
		n = n % i;
	}
	_putchar(n + '0');
}
