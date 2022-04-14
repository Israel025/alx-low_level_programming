#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @c: The character to be checked
 *
 * Description: This function checks any input if it is
 * a digit (0 through 9).
 * Return: 1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	return (c > 47 && c < 58);
}
