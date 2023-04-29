#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * more_numbers - prints 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				/*added ascii code of 0 which is 48*/
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
