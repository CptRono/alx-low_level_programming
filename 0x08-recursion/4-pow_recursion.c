#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - computes x to power y
 * @x: number to be raised
 * @y: power
 * Return: returns the x power y, or -1 uf y is negative
 * and 1 if y is 0
*/
int _pow_recursion(int x, int y)
{
	int z;

	z = 0;
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	z++;
	return (x * _pow_recursion(x, y - 1));
}
