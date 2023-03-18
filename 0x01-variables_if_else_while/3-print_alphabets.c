#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the execution
 * Return: returns 0 when successful
 * srand - random numbers
 */
int main(void)
{
	int i = 97;
	int x = 65;

	while (i >= 97 && i <= 122)
	{
		putchar(i);
		i += 1;
	}
	while (x >= 65 && x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
