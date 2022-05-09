#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements to be allocated.
 * @size: The size of elements.
 *
 * Description: functions as described above.
 * Return: the address to the allocated space.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *memSpace, i;

	memSpace = malloc(size * nmemb);
	if (memSpace == NULL || memSpace == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (memSpace[i])
		{
			memSpace[i] = 0;
			i++;
		}
		return (memSpace);
	}
}
