#include <string.h>
#include "main.h"

/**
 * _strcpy - copies the string from one place to another.
 * @src: The source string to be copied.
 * @dest: The destination string
 *
 * Description: functions as described above
 * Return: the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = src[i];

	return (dest);
}
