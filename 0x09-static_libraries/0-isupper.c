#include"main.h"
/**
 * _isupper - that checks for uppercase character
 * @c: is the character to print
 * Return: 1 if c is uppercase
 * Returns 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
