#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks if chararacter is a digit
 * @c: char to be checked
 * Return: 1 on success
 */
int _isdigit(int c)
	{
		if (c > 47 && c < 58)
			return (1);
		else
			return (0);
	}
