#include "main.h"

/**
 * cap_string - capitalizes first character of a string
 * after a special character.
 * @str: The string to be edited.
 *
 * Description: functions as described above
 * Return: modified string.
 */
char *cap_string(char *str)
{
int j;

j = 0;
while (str[j] != '\0')
{
if (str[j + 1] != '\0')
{
	switch (str[j])
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (str[j + 1] > 96 && str[j + 1] < 123)
				str[j + 1] = str[j + 1] - 32;
			break;
	}
}
j++;
}
return (str);
}
