#include <stdio.h>
#include <stdlib.h>
/**
 * is_int - checks if the chars in the string str are all integers
 * @str: str to be checked
 * Return: 1 if str is fully an int, 0 if not
 */
int is_int(char *str)
{
	char *endptr;

	if (str == NULL)
		return (0);
	/*check if str is an int*/
	strtol(str, &endptr, 10);
	/*if endpointer is the null terminator, then all chars are integers*/
	if (*endptr != '\0')
		return (0);
	return (1);
}
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
	/*check if both arguments are integers*/
	for (i = 1; i <= 3; i++)
	{
		if (is_int(argv[i]) != 1)
		{
			printf("Error\n");
			exit(1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
