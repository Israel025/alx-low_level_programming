#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: The string to be examined.
 *
 * Description: functions as described above.
 * Return: integer value of the lenght of string s.
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
