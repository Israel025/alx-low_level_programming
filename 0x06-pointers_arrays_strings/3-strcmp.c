#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Description: functions as described above
 * Return: a pointer to the resulting string dest.
 */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	if (s1[0] > s2[0])
	{
		cmp = s1[0] - s2[0];
	}
	else if (s1[0] < s2[0])
	{
		cmp = s1[0] - s2[0];
	}
	else if (s1[0] == s2[0])
	{
		cmp = s1[0] - s2[0];
	}
	else
	{
		if (s1 > s2)
			cmp = s1 - s2;
		else if (s1 < s2)
			cmp = s1 - s2;
		else if (s1 == s2)
			cmp = s1 - s2;
	}
	return (cmp);
}
