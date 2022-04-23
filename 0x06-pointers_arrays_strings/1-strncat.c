#include "main.h"

/**
 * _strlen - gets the absolute lenght of a string.
 * * @k: string to count
 *
 * Description: functions as described above
 * Return: the count value.
 */
int _strlen(char *k)
{
	int count, itr;

	count = 0;
	for (itr = 0; k[itr] != '\0'; itr++)
		count++;
	return (count);
}

/**
 * _strncat - concatentes two strings up to
 * n specified characters from source.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: amount of characters to be copied.
 *
 * Description: functions as described above
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, dest_nxt, src_len;

	dest_nxt = _strlen(dest);
	src_len = _strlen(src);

	if (n >= 0 && n <= src_len)
	{
		for (i = 0; i < n; i++)
		{
			dest[dest_nxt] = src[i];
			dest_nxt++;
		}
	}
	else if (n > src_len)
	{
		j = 0;

		while (src[j] != '\0')
		{
			dest[dest_nxt] = src[j];
			dest_nxt++;
			j++;
		}
		dest[dest_nxt] = '\0';
	}
	return (dest);
}
