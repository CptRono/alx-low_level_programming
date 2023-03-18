#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the execution
 * Return: returns 0 when successful
 * srand - random numbers
 * time -time function
 */
int main(void)
{
	int n;
	int ldg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldg = n % 10;
	if (ldg > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldg);
	else if (ldg == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldg);
	else if (ldg < 6 && ldg != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldg);
	return (0);
}

