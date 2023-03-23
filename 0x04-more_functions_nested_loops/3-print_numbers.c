#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints 1 to 9
 * Return: returns 0 when successful
 * srand - random numbers
 */
void print_numbers(void)
{
	char i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
int main(void)
{
	print_numbers();
	return (0);
}
