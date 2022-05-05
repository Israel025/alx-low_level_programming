#include "main.h"

/**
 * _strdup - Duplicate a string and It returns
 * a pointer to null-terminated byte string.
 * initializes it with a specific char.
 * @str: size of the array.
 *
 * Description: functions as described above.
 * Return: pointer to the array.
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = 1;
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}
		copy = malloc(sizeof(char) * len);

		if (copy == NULL || copy == 0)
		{
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{
			copy[i] = str[i];
		}
		copy[i] = str[i];
		return (copy);
	}
}
