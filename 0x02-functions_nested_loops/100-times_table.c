#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 * @n: number whose n table is to be genareated
 */
void print_times_table(int n)
{
	int a;
	int b;

	for (b = 0; b <= n; b++)
	{
		if (n > 15 || n < 0)
			break;
		for (a = 0; a <= n; a++)
		{
			int c;

			c = b * a;
			printf("%d", c);
			if (a == n)
				break;
			if (c < 10)
				printf(",   ");
			else if (c > 99)
				printf(", ");
			else
				printf(",  ");
		}
		putchar('\n');
	}
}
