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
	int j, cmp;

	j = 0;
	cmp = 0;

	while (s1[j] || s2[j])
	{
		if (s1[j] == s2)
		{
			continue;
		}
		else if (s1[j] > s2[j])
		{
			cmp = s1[j] - s2[j];
			break;
		}
		else if (s1[j] < s2[j])
		{
			cmp = s1[j] - s2[j];
			break;
		}
		j++;
	}
	return (cmp);
}
