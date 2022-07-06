#include "main.h"

/**
 * print_alphabet_x10 - printing lower case letters
 *
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	y = 0;

	while (y < 10)
	{
		for (c = 'a'; c <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		y++;
	}
}
