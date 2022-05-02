#include "main.h"

/**
 * _strlen - gets the absolute lenght of a string.
 * * @k: string to count
 *
 * Description: functions as described above
 * Return: the count value.
 */
int _strlen(char *k)
{
	int count, itr;

	count = 0;
	for (itr = 0; k[itr] != '\0'; itr++)
		count++;
	return (count);
}

/**
 * _strcmp - compares two strings with each other
 * for equality.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Description: functions as described above
 * Return: an integer value (signed/unsigned).
 */
int _strcmp(char *s1, char *s2)
{
	int j, cmp, len_s1, len_s2, longest;

	j = 0;
	cmp = 0;
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (len_s1 > len_s2)
		longest = len_s1;
	else if (len_s1 < len_s2)
		longest = len_s2;
	else if (len_s1 == len_s2)
		longest = len_s1;

	while (j <= longest)
	{
		if (s1[j] > s2[j])
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
