#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 10; a++)
		{
			int c;

			c = b * a;
			printf("%d", c);
			if (a == 9)
				break;
			if (c < 10)
				printf(",  ");
			else
				printf(", ");
		}
		putchar('\n');
	}
}
