#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Number to be evaluated.
 * @index: The index.
 *
 * Description: functions as described above.
 * Return: 1 if it success, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);

	bits = 1 << index;

	if ((bits | *n) == *n)
		*n = *n ^ bits;

	return (1);
}
