#include "main.h"

/**
 * wildcmp - Checks if two strings are identical or not.
 * @s1: string1 to be evaluated.
 * @s2: string2 to be compared with.
 *
 * Description: functions as described above.
 * Return: 1(if true) and 0(otherwise).
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
