#include "main.h"

/**
 * print_alphabet - printing lower case letters
 *
 */
void print_alphabet(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
	y = 0;
		do {
		_putchar(x);
		} while (y <= 10);
	}
	_putchar('\n');
}
