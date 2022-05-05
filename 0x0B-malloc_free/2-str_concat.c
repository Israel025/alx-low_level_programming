#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: The string to be examined.
 *
 * Description: functions as described above.
 * Return: integer value of the lenght of string s.
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Description: functions as described above.
 * Return: the concatenated string (char).
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len;

	len = _strlen(s1);
	len += _strlen(s2);
	len += 1;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL || concat == 0)
	{
		return (NULL);
	}
	else
	{
		j = 0;

		for (i = 0; s1[i] != '\0'; i++)
		{
			concat[j] = s1[i];
			j++;
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			concat[j] = s2[i];
			j++;
		}
		concat[j] = s2[i];
		return (concat);
	}
}
