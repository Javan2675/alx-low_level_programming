#include "main.h"

/**
 *_strlen - finds the length of a string
 *@s: a character
 *Return: 0
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
