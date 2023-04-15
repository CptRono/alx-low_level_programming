#include <stdio.h>
/**
 * main - prints all arguments the program receives
 * @argc: number of arguments
 * @argv: names of argyments
 * Return: 0 on success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
