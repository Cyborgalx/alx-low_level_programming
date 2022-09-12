#include <stdio.h>

/**
 * main - print combination of three numbers
 * Return: Always 0 (SUccess)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
	for (b = 48; b <= 57; b++)
	{
	for (c = 48; b <= 57; c++)
	{
	for (d = 48; b <= 57; d++)
	{
	if (((c + d) < (a + b) && c >= a) || a < c)
	{
	putchar(a);
	putchar(b);
	putchar(' ');
	putchar(c);
	putchar(d);

	if (a + b + c + d == 227 && c == 57)
	{
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	}

	putchar('\n');
	return (0);
}



