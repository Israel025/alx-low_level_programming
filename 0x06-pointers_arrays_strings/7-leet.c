#include "main.h"

/**
 * leet - encodes a string into 1337(leet);
 * @str: The string to be encoded.
 *
 * Description: functions as described above
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i, j;

	int small[5] = {97, 101, 111, 116, 108};
	int upper[5] = {65, 69, 79, 84, 76};
	int repl[] = {52, 51, 48, 55, 49};

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == small[j] || str[i] == upper[j])
				str[i] = repl[j];
		}
		i++;
	}
	return (str);
}
