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
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (a > b || a > c || (a == b && b == c && c == d) || (a + b) > (c + d))
						continue;
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 56 && b == 57 && c == 57 && d == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}



