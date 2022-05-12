#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The struct's instance.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Description: functions as described above.
 * Return: void, nothing is returned.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
