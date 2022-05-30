#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String to be converted.
 *
 * Description: functions as described above.
 * Return: The converted number, or 0 if it fails.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int i;

	if (b == NUL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		conv = 2 * conv + (b[i] - '0');
	}

	return (conv);
}
