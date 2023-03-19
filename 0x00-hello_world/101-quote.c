#include <stdio.h>
#include <unistd.h>
/**
 * main - this is the entry point
 * Return: returns 1 to indicate the program has terminated with an error
 * 2 - standard error
 * 58 - tells write the number of characters to be written into the stderr file
 */
int main(void)
{
/*
 * make an array of the string with the type char so that each character has
 * a length of 1. the length of the array is the number of characters in the
 * string
 * minus 1 from length to subtract the newline char (slash n) which is 1 char
 */
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015\
-10-19\n";
	int stringLength = sizeof(string) - 1;

	write(2, string, stringLength);
	return (1);
}
