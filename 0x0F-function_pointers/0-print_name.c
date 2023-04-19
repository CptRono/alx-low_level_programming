#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - accepts a function that prints out a string in a format
 * specified in the passed function
 * @name: the string to be printed by the passed function
 * @f: pointer to the function passed as an argument
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
