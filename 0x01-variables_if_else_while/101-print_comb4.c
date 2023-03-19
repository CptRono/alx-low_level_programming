#include <stdio.h>
#include <unistd.h>

/**
 * main - this is the entry point
 * Return: returns 0 to show success
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (a == b || b == c || a > b || b > c)
					continue;
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55 && b == 56 && c == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
