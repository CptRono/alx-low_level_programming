#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings passed as arguments
 * @separator: string printed between the strings
 * @n: number of strings to be printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list p;

	va_start(p, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		j = va_arg(p, char *);
		if (j == NULL)
			j = "(nil)";

		if (i == (n - 1))
			printf("%s\n", j);
		else
			printf("%s%s", j, separator);
	}
}
