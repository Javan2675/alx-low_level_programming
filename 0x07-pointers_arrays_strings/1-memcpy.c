#include "main.h"

/**
 * *_memcpy - function that copies
 *
 * @src: string
 *
 * @dest: point of string
 *
 * @n: parameters
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
