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

	i = 0;

	while (n > 0)
	{
		src[i] = dest[i];
		i++;
		n--;
	}
	return (dest);
}
