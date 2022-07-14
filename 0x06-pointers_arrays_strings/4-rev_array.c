#include "main.h"

/**
 * _reverse_array - reverses the content of array
 *
 * @a: integer
 *
 * @n: integer
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int j;
	int tmp;

	for (j = 0; j < (n -1); j++)
	{
		tmp = a[j]
		a[j] = a[n -1];
		a[n -1] =tmp;
		n--;
	}
}
