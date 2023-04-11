#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *p;
	int i;
	int j;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	p = (char *)malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		p[j] = str[j];
	return (p);
}
