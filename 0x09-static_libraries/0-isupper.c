#include <stdio.h>
#include "main.h"
/**
 * _isupper - finds chars in lowercase
 * Return: i on success
 * @c: char to be computed
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
