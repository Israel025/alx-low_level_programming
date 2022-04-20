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
	int index;

	index = _strlen(str) - 1;
	while (str[index] >= 0)
	{
		_putchar(str[index]);
		index--;
	}
	_putchar('\n');
}
