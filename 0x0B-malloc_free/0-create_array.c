#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 *
 * @size: Argument count
 *
 * @c: Arguments passed
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	return (str);
	}
}
