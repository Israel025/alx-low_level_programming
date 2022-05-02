#include "main.h"

/**
 * _strcat - concatentes two strings.
 * @dest: The destination string.
 * @src: The source string
 *
 * Description: functions as described above
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, nxt;

	nxt = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		nxt++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[nxt] = src[j];
		nxt++;
		j++;
	}
	dest[nxt] = '\0';
	return (dest);
}
