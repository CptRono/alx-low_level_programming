#include <stdio.h>
#include <unistd.h>

/**
 * main - prints fibonacci sequence
 *
 * Return: 0 on success
 */
int main(void)
{
	long int sum;
	long int b = 0;
	long int c = 1;
	long int d = c;

	for (sum = 0; d <= 4000000; d = c + b)
	{
		if ((d % 2) == 0)
		{
			sum += d;
		}
		b = c;
		c = d;
	}
	printf("%d\n", sum);
	return (0);
}

