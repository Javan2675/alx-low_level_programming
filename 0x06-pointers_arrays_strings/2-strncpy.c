#include "main.h"

/**
 *_strncpy - copy two strings
 *
 * @src: String
 *
 * @dest: point of string
 *
 * @n: an integer
 *
 * Return: Dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;



	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];

	}
	dest[j] = '\0';

	return (dest);
}
