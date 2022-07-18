#include "main.h"

/**
 * *_memset - function that fills the first n bytes
 *
 * @s: string
 *
 * @b: point of string
 *
 * @n: parameter
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
