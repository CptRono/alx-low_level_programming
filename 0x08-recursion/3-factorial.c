#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial of a number
 * @n: the number
 * Return: -1 if number is lower than 0(to show an error), 1 if n is 0
 * or the factorial of a number larger than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
