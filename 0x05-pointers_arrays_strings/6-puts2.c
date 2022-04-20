#include <string.h>
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
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
