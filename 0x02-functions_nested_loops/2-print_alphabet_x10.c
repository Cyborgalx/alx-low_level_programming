#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char f;

	while (count++ <= 9)
	{
	for (f = 'a'; f <= 'z'; f++)
	_putchar(f);
	_putchar('\n');
	}
}
