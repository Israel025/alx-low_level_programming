#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers using malloc.
 * @min: The start range.
 * @max: The end range.
 *
 * Description: functions as described above.
 * Return: the address to the allocated space.
 */
int *array_range(int min, int max)
{
	int *newArr;
	unsigned int i, len;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		len = (max - min) + 1;

		newArr = malloc(sizeof(min) * len);
		if (newArr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i <= len; i++)
			{
				newArr[i] = min;
				min++;
			}
			return (newArr);
		}
	}
}
