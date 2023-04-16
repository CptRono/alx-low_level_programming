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
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long num;

		num = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			exit(1);
		}
		sum = sum + (int)num;
	}
	printf("%d\n", sum);
	return (0);
}
