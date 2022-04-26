#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Memory area pointer.
 * @b: constant byte.
 * @n: Amount of memory bytes
 *
 * Description: functions as described above
 * Return: a pointer to the resulting string dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
