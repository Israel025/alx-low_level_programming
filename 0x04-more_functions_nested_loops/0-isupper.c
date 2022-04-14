#include "main.h"

/**
 * _isupper - checks for uppercase charcter.
 * @c: The character to be checked
 *
 * Description: This function checks any input if it is in
 * uppercase form.
 * Return: 1 if the character is in uppercase and 0 otherwise
 */
int _isupper(int c)
{
	return (c > 64 && c < 91);
}
