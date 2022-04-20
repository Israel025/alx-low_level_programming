#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: The string to be conditionally printed.
 *
 * Description: functions as described above
 * followed by a new line.
 * Return: void, no return value.
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
