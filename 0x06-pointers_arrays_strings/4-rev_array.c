#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses characters in an array
 * @a:the array
 * @n: number of chars in array a
 */
void reverse_array(int *a, int n)
{
	/*reduce n by one so it doesn't point to '\0'*/
	int temp;
	int i;

	n = n - 1;
	/*using a temporary value and an increamenting var i, swap a[i] with a[n]*/
	/*break the loop when i == n, which is the dead centre*/
	for (i = 0; (!(i == n)); i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}