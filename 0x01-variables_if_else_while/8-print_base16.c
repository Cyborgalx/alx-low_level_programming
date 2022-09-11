#include <stdio.h>

/**
 * main - ENtry point
 * Decription: Print all number in base 16 lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
	}
