#include <stdio.h>
#include <unistd.h>

/**
 * main - prints fibonacci sequence
 *
 * Return: 0 on success
 */
int main(void)
{
	long int a;
	long int b = 0;
	long int c = 1;
	long int d = c;

	for (a = 1; a <= 98; a++)
	{
		d = c + b;
		b = c;
		c = d;
		if (a == 98)
			printf("%ld", d);
		else
			printf("%ld, ", d);
	}
	printf("\n");
	return (0);
}
