#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void);
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
			if (a == 9)
				break;
			if (c == 0 && (b != 0 || a == 0))
				printf("%d", c);
			else if (c <= 9)
				printf(",  %d", c);
			else
				printf(", %d", c);
		}
		putchar('\n');
	}
}
