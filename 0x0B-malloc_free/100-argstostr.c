#include "main.h"
#include <stdlib.h>

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
 * argstostr - concatenates all the supplied arguments.
 * @ac: Arguments count.
 * @av: Arguments array.
 *
 * Description: functions as described above.
 * Return: pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *newStr;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len += ac;
	len += 1;

	newStr = malloc(sizeof(char) * len);
	if (newStr == NULL || newStr == 0)
	{
		return (NULL);
	}
	else
	{
		j = 0;
		k = 0;
		while (k < ac)
		{
			i = 0;
			while (av[k][i] != '\0')
			{
				newStr[j] = av[k][i];
				i++;
				j++;
			}
			newStr[j] = '\n';
			j++;
			k++;
		}
		return (newStr);
	}
}
