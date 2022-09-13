#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Description:  prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void); int main(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');

		round++;
	}
}
