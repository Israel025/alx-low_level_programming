#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new copy of dog struct.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Description: functions as described above.
 * Return: void, nothing is returned but NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bruno;

	bruno = malloc(sizeof(struct dog));

	if (bruno == NULL)
	{
		return (NULL);
	}
	else
	{
		free(bruno->name);
		free(bruno->owner);
		free(bruno);
		bruno->name = name;
		bruno->age = age;
		bruno->owner = owner;
	}
	return (bruno);
}
