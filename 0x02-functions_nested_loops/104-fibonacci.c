#include <stdio.h>
#include <unistd.h>

/**
 * main - prints fibonacci sequence
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b = 0;
	unsigned long int c = 1;
	unsigned long int d = c;

	for (a = 1; a <= 98; a++)
	{
		d = c + b;
		b = c;
		c = d;
		if (a == 98)
			printf("%lu", d);
		else
			printf("%lu, ", d);
	}
	printf("\n");
	return (0);
}
