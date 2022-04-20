#include "main.h"

/**
 * _puts - print a string.
 * @str: The string to be printed.
 *
 * Description: functions as described above
 * followe by a new line.
 * Return: void, no return value.
 */
int _puts(char *str)
{
	int itr;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
}
