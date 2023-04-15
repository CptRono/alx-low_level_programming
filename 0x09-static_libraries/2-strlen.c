/**
 * _strlen - returns lenth of a string
 * @s: pointer where the string is stored
 * Return: rerurns the lenght of string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
