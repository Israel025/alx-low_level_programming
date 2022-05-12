#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: The struct's instance.
 *
 * Description: functions as described above.
 * Return: void, nothing is returned.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
