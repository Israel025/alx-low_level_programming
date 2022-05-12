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
d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
d->age == '\0' ? printf("Age: (nil)\n") : printf("Age: %lf\n", d->age);
d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
}
