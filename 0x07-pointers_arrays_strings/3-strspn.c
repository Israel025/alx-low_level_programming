#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: characters to search for.
 *
 * Description: functions as described above.
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, ret;
	char *str_s, *str_ac;

	ret = 0;
	str_s = s;
	str_ac = accept;
	
	i = 0;
	while (str_s[i] != '\0')
	{
		j = 0;
		while (str_ac[j] != '\0')
		{
			if (str_ac[j] == str_s[i])
			{
				ret++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (ret);
}

