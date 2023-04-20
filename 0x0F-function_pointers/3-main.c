#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - program that takes 2 integers and performs a mathematical
 * operation chosen by the user
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Description - format in the command line: program_name int1 operation int2
 * e.g: calculator 5 + 6
 * Return: product of the chosen operation (add, minus, mul, div, modulo)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int result;
	char *choice;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((strcmp(argv[2], "/") != 0 || strcmp(argv[2], "%") != 0)
	&& argv[3] == 0) || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(100);
	}
	/*find the chosen operator*/
	choice = argv[2];
	/*call the function related to the operator*/
	result = get_op_func(choice)(atoi(argv[1]), atoi(argv[3]));
	/**
	 * if (result == NULL)
	 * {
	 * printf("Error\n");
	 * exit(98);
	 * }
	 */
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
