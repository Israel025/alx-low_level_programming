#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct dog dog_t;

/**
 * struct dog - A sample dog struct
 * @name: The dog's name.
 * @owner: The dog's owner.
 * @age: The dog's age.
 *
 * Description: As described above.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
