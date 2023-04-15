#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of 2 args passed with the program
 * @argc: number of args
 * @argv: arguments passed
 * Return: 0 on success. 1 if args passed are not 2
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
