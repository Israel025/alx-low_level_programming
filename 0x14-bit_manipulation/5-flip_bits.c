#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: Number to be evaluated.
 * @m: Number to flip to.
 *
 * Description: functions as described above.
 * Return: The number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			counter++;
		m = m >> 1;
		n = n >> 1;
	}

	return (counter);
}
