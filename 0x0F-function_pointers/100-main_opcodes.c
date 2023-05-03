#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments passed with the program
 * @argv: number of bytes to print
 *
 * Description - usage: ./main number_of_bytes
 *	- creates a pointer to the main function and a char array
 *	- copies the values of the main pointer into the char array
 *	- whatever is copied into the array are the opcodes of main
 *	- works because compiled machine code of a function are stored in a
 * contiguous mem block immediately after the function's code
 */
void main(int argc, char *argv[])
{
	void (*main_ptr)(int, char **);
	char *opcodes;
	int args, count;

	main_ptr = &main;
	opcodes = (char *)main_ptr;
	args = atoi(argv[1]);
	if (argc != 2 || args == 0)
	{
		printf("Error\n");
		exit(1);
	}
	if (args < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (count = 0; count < args; count++)
	{
		printf("%02x ", (unsigned char)*(opcodes + count));
	}
	printf("\n");
}
/**
 * func_ret - returns 0
 */
int func_ret(void)
{
	return (0)
}
