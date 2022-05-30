#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Description: functions as described above.
 * Return: 0 if big endian and 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i;
	char *j;

	i = 1;
	j = (char *) &i;

	return ((int)*j);
}
