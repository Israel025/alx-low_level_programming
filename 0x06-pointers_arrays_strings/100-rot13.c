#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: The string to be encoded.
 *
 * Description: functions as described above
 * Return: encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char tbl[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rep[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == tbl[j])
			{
				str[i] = rep[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
