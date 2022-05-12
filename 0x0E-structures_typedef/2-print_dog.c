#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: The struct's instance.
 *
 * Description: functions as described above.
 * Return: void, nothing is returned.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %f\n", (d->age == '\0') ? "(nil)" : d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
