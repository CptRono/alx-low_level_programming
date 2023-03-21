#include <stdio.h>
#include "main.h"
/**
 * _abs - computes absolute value
 * @i: integer to be computed
 * Return: returns absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
	    int x;
		x = (i * -1);
		return (x);
	}
}
