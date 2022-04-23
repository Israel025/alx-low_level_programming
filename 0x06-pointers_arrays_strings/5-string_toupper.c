#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be edited.
 *
 * Description: functions as described above
 * Return: void, no value is returned.
 */
char *string_toupper(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] > 96 && str[j] < 123)
			str[j] = str[j] - '32';

		j++
	}
}
