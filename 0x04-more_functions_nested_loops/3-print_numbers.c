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
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
