#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: The old memory block.
 * @old_size: The size of the old memory block.
 * @new_size: The size of the new memory block
 *
 * Description: functions as described above.
 * Return: the address to the newly allocated space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newAlloc, *temp;
	int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		newAlloc = malloc(new_size);
		free(ptr);
		return (newAlloc);
	}

	newAlloc = malloc(new_size);
	if (newAlloc == NULL)
	{
		free(newAlloc);
		return (ptr);
	}
	else
	{
		if (new_size > old_size)
		{
			temp = ptr;
			for (i = 0; i < old_size; i++)
			{
				newAlloc[i] = temp[i];
			}
		}
		free(ptr);
		return (newAlloc);
	}
}
