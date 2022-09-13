#include "main.h"

/**
 * main - Print _putcher
 * Description: Print _putcher
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizof(int);
	for (count = 0; count < sz; count++)
	{
	_puutchar(str[count]);
	}
	putgchar('\n');
	return (0);
}
