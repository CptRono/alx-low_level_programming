#include <stdio.h>
#include <unistd.h>

/**
 * main - prints fibonacci sequence
 * Return: 0 on success
 */
int main(void)
{
	long int a;
	long int b = 0;
	long int c = 1;
	long int d = c;

	for (a = 0; d <= 4000000; d = c + b)
	{
		if ((d % 2) == 0)
		{
			if (a == 0)
				printf("%ld", d);
			else
				printf(", %ld", d);
			a++;
		}
		b = c;
		c = d;
	}
	printf("\n");
	return (0);
}
