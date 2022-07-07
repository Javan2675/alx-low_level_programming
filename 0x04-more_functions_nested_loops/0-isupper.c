#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: a character
 *
 * Return: 1 and 0 depending on the case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
