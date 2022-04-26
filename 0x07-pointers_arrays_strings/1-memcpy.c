#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination pointer.
 * @src: source to copy from
 * @n: bytes of the memory to copy
 *
 * Description: functions as described above.
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
