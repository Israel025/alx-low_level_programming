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
	char *memSpace;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memSpace = malloc(size * nmemb);
	if (memSpace == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size; i++)
	{
		memSpace[i] = 0;
		i++;
	}
	return (memSpace);
}
