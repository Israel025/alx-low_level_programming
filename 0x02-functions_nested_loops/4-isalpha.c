#include "main.h"

/**
 * _isalpha - checks for alphabetic charcter.
 * @c: The character to be checked
 *
 * Description: This function checks any input if it is
 * an alphabet.
 * Return: 1 if the character is in lowercase and 0 otherwise
 */
int _islower(int c)
{
	return ((c > 96 && c < 123) || (c > 64  && c < 91));
}
