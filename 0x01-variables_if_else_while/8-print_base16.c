#include <stdio.h>

/**
 * main - Function
 * Return: 0
 */

int main(void)
{
	int i;
	char c;

	for (i = 48 ; i < 58; i++)
	{
		putchar(i);
	}
	for (c = 'a' ; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
