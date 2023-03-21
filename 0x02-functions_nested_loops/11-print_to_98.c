#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to8
 * @n: the number from which counting to 98 begins
 */
void print_to_98(int n)
{
	for ( ; n < 98; n++)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(",");
		printf(" ");
	}
	for ( ; n >= 98; n--)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(",");
		printf(" ");
	}
}
