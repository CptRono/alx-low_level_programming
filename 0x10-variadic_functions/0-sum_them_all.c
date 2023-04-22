#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums an indefinite number of arguments passed to it
 * @n: number of arguments to be added. Not included in addition
 * Return: sum of the arguments. 0 if 0 args are passed.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int j;

	if (n == 0)
		return (0);

	va_start(p, n);
	for (i = 0, j = 0; i < n; i++)
	{
		j += va_arg(p, int);
	}
	return (j);
}
