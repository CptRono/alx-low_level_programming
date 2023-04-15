#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if chararacter is a letter
 * @c: char to be checked
 * Return: 1 on success
 */
int _isalpha(int c)
	{
		if ((c > 96 && c < 123) || (c > 64 && c < 91))
			return (1);
		else
			return (0);
	}
