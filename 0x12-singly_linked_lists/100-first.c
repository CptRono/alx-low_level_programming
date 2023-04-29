#include <stdio.h>
/**
 * print_b4_main - prints a string before main is executed
 * 
 * Description - uses a contructor attribute. this attribute specifies
 * a function to be called automatically before main function is
 * executed.
*/
void __attribute__((constructor)) print_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
