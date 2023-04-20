#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user.
 * @s: the operation chosen by the user: +, -, *, or /
 * @a: 1st operand of the operation
 * @b: 2nd operand of the operation
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 6)
	{
		if(strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
