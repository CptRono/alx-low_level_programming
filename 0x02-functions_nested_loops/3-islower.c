#include <stdio.h>
#include "main.h"
/**
 * _islower - finds chars in lowercase
 * Return: i on success
 * @c: char to be computed
 */
int _islower(int c)
	{
		if (c > 96 && c < 123)
			return (1);
		else
			return (0);
	}
