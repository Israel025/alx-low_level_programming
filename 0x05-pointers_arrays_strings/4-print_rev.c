#include <string.h>
#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @str: The string to be printed.
 *
 * Description: functions as described above
 * followe by a new line.
 * Return: void, no return value.
 */
void print_rev(char *str)
{
	int len;

	for (len = strlen(str) - 1; len >= 0; len--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
