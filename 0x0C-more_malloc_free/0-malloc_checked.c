#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: The amount of memory block (in bytes) 
 * to be dynamically allocated.
 *
 * Description: functions as described above.
 * Return: a pointer to the allocated memory space.
 */
void *malloc_checked(unsigned int b)
{
	int *memSpace;

	memSpace = malloc(b);

	if (memSpace == NULL || memSpace == 0)
	{
		exit(98);
	}
	else
	{
		return (memSpace);
	}
}
