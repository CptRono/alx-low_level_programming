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

	while (i >= 97 && i <= 122)
	{
		putchar(i);
		i += 1;
	}
	putchar('\n');
	return (0);
}
