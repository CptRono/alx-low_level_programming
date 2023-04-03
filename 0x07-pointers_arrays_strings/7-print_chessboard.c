#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_chessboard - prints a chessboard
 * @a: rows
*/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			write(1, &a[i][j], 1);
		}
		printf("\n");
	}
}
