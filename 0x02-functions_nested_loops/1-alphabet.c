#include "main.h"
#include <stdio.h>

/**
 * main - print alphabet in lower case followed by a new line
 *
 * Description: print alphabet in lower case followed by a new line
 *
 * Return: Always returns 0
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

