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
	int sum;
	int sum1;

	sum = 0;
	sum1 = 0;
	for (i = 0; i <= size; i++)
	{
		sum += a[i * size + i];
		sum1 += a[i * size + size - i - 1];
	}
	printf("%d, %d\n", sum, sum1);
}
