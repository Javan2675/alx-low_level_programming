#include "main.h"

/**
 * rev_string - prints a string
 *
 * @s: string pointer
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int x, y;
	char tmp;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y <= x; y++)
	{
		tmp = s[y];
		s[y] = s[x];
		s[x] = tmp;
		x--;
	}
}
