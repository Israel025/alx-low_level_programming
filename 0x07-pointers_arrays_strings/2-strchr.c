#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to be searched.
 * @c: character to search for.
 *
 * Description: functions as described above.
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}

		i++;
	}
	if (s == c)
	{
		return (s);
	}

	return (0);
}

