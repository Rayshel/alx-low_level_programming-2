#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase followed by a new line
 *
 * Description: prints alphabet in lowercase followed by a new line
 *
 * Return: Always returns 0;
 *
 */
void print_alphabet(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
