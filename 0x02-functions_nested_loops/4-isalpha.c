#include "main.h"

/**
 * _isalpha - check if a character is aplpha
 * @c: The character is checked.
 *
 * reture: 1 if character is letter, lower case or upper case, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
