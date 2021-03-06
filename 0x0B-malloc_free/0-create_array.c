#include "main.h"

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char.
 * @size: size of the array.
 * @c: character initialised to.
 *
 * Description: functions as described above.
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(c) * size);
	if (arr == NULL || arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
