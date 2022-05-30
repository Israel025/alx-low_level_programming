#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Number to be evaluated.
 * @index: The index.
 *
 * Description: functions as described above.
 * Return: 1 if it success, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL || index > 63)
		return (-1);

	bits = 1 << index;

	*n = (*n | bits);

	return (1);
}
