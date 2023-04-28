#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	struct list
	{
		char *str;
		int len;
		struct list *next;
	};
	struct list a;
	struct list b;
	struct list c;
	a.str = strdup("hello");
	a.len = 5;
	a.next = &b;

	b.str = strdup("hello world");
	b.len = 11;
	b.next = &c;

	c.str = strdup("hello again");
	c.len = strlen(a.str);
	c.next = NULL;

	printf("%d\n", a.len);
	return 0;
}
