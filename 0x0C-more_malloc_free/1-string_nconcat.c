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
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: n string out of s2.
 *
 * Description: functions as described above.
 * Return: the concatenated string (char).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len, lenS2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenS2 = _strlen(s2);
	if (n >= lenS2)
		n = lenS2;

	len = _strlen(s1);
	len += n;
	len += 1;

	concat = malloc(sizeof(*s1) * len);
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
		for (i = 0; i < n; i++)
		{
			concat[j] = s2[i];
			j++;
		}
		concat[j] = s2[i];
		return (concat);
	}
}
