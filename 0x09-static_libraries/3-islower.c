#include "main.h"

/**
 * _islower - check if a character is lower case
 *@c: The Characterto check
 *
 * Return: 1 if character is lower case and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

