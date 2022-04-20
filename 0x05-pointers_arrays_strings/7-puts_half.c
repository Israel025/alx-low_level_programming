#include <string.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: The string to be conditionally printed.
 *
 * Description: functions as described above
 * followed by a new line.
 * Return: void, no return value.
 */
void puts_half(char *str)
{
	int len, i, oddStart, evenStart;

	len = strlen(str);
	oddStart = (len - 1) / 2;
	evenStart = len / 2;

	if (len % 2 == 0)
	{
		for (i = evenStart; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = oddStart; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
