#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: the array/matrix
 * @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum;
	int sum1;

	sum = 0;
	sum1 = 0;
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum = sum + *(a + i);
		sum1 = sum1 + *(a + j);
		a = a + (size);
	}
	printf("%d, %d\n", sum, sum1);
}
