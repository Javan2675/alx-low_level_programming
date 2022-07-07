#include "main.h"

/**
 * more_numbers - printing lower case letters
 *
 */
void more_numbers(void)
{
	int x;
	int y;

	y = 0;

	while (y < 10)
	{
		for (x = '48'; x <= '62'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		y++;
	}
}
