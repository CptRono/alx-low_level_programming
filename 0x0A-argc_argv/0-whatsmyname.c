#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: names of argyments
 * Return: 1 on success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (1);
}
