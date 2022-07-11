#include "main.h"

/**
 * swap_int - swaps the two integers
 * @a: pointer to the first value
 * @b: ponter to the second value
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
