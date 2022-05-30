#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to be evaluated.
 * @index: The index.
 *
 * Description: functions as described above.
 * Return: The value of the bit at index, 0 otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 99)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
