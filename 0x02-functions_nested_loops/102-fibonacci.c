#include "main.h"
#include <stdio.h>
/**
 * main - prints fibonnacci sequence
 * @a - counts up to 50th term
 * @b - first term
 * @c - 2nd term
 * @d - sum of 1st and 2nd
 */
int main(void)
{
	long long int a;
	long long int b;
	long long int c;
	long long int d;

	b = 0;
	c = 1;
	for (a = 0; a < 50; a++)
	{
		d = c + b;
		if (a == 0)
			printf("%lld, %lld", b, c);
		printf(", %lld", d);
		b = c;
		c = d;
	}
	printf("\n");
	return (0);
}
