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
	int len, i, start;
	
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	start = (len + 1) / 2;

	for (i = start; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
