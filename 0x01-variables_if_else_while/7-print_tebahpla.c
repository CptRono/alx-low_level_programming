#include <stdio.h>
/**
 * main - entry point of the execution
 * Return: returns 0 when successful
 * srand - random numbers
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
