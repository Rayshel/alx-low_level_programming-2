#include <stdio.h>
#include "main.h"
/**
 * main - prints alphabet in lowercase followed by a new line
 *
 * Description: prints alphabet in lowercase followed by a new line
 *
 * Return: void
 */
void print_alphabet(void); int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
}
