#include "main.h"

/**
 *_isalpha - checks for cases
 *@c: a character
 *Return: 1 if its a upper or lower case letter and 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
