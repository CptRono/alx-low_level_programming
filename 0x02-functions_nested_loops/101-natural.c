#include "main.h"
/**
 * main - prints sum of multiples of 3 & 5
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int b;

	b = 0;
	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b = b + a;
		else
			continue;
	}
	printf("%d\n", b);
	return (0);
}
