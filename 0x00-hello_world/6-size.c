#include <stdio.h>
/**
 * main - starting point
 * Description: Prgrammed that prints size
 * Return: If no error always return 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %ld bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %ld bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
