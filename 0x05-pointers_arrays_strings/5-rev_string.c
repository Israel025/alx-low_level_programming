#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: The string to be reversed.
 *
 * Description: functions as described above
 * Return: void, no return value.
 */
void rev_string(char *s)
{
	int len, i;
	char swap;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = swap;
	}
}
