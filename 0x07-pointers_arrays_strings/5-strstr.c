#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be searched.
 * @needle: string to find.
 *
 * Description: functions as described above.
 * Return: a pointer to the begining of the located string
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp_stack;
	char *temp_ndle;

	while (*haystack != '\0')
	{
		temp_stack = haystack;
		temp_ndle = needle;

		while (*haystack != '\0' && *temp_ndle != '\0' && *haystack == *temp_ndle)
		{
			haystack++;
			temp_ndle++;
		}
		if (!*temp_ndle)
			return (temp_stack);
		haystack = temp_stack + 1;
	}
	return (0);
}
