#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", va_arg(p, int));
		else
			printf("%d%s", va_arg(p, int), separator);
	}
	va_end(p);
}
