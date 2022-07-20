#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @s: pointer of a string
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
