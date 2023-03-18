#include <stdio.h>
/**
 * main - entry point of the execution
 * Return: returns 0 when successful
 * srand - random numbers
 */
int main(void)
{
	int i = 48;
	int f = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (f <= 102)
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
