#include "main.h"

/**
 * _atoi - Converts a string to an integer(conditionally).
 * @s: The string to be conditionally converted.
 *
 * Description: functions as described above
 * Return: converted integer.
 */
int _atoi(char *s)
{
	int signs, i;
	unsigned int digits;

	signs = 1;
	digits = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45)
			signs *= -1;
		else if (s[i] >= 48 && s[i] <= 57)
			digits = (digits * 10) + (s[i] - 48);
		else if (digits > 0)
			break;
	}

	return (digits * signs);
}
