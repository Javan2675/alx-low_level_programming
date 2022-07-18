#include "main.h"

/**
 * *_memcpy - function that fills the first n bytes
 *
 * @src: src ptr
 *
 * @dest: dest ptr
 *
 * @n: parameter
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
