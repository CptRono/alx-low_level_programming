#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - counts each minute of the day
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a < 10)
			{
				printf("0%d", a);
			}
			else
			{
				printf("%d", a);
			}
			printf(":");
			if (b < 10)
			{
			printf("0%d", b);
			}
			else
			{
				printf("%d", b);
			}
			printf("\n");
			if (a == 23 && b == 59)
				break;
		}
	}
}
