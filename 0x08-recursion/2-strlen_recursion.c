#include "main.h"

/**
 * _strlen_recursion - prints the length of  a string.
 * @s: string to count.
 *
 * Description: functions as described above.
 * Return: an int value.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
