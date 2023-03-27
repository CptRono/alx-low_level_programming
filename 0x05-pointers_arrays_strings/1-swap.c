/**
 * swap_int - swaps the values of two integers.
 * @a: 1st value to be swapped
 * @b: 2nd to be swapped with 1st
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
