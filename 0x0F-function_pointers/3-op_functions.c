#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 ints
 * @a: 1st int
 * @b: 2nd int
 * Return: quotient
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - divides 2 ints and returns remainder
 * @a: 1st int
 * @b: 2nd int
 * Return: remainder of division
*/
int op_mod(int a, int b)
{
	return (a % b);
}
