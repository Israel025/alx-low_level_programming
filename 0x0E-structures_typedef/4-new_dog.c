#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: The string to be examined.
 *
 * Description: functions as described above.
 * Return: integer value of the lenght of string s.
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * str_copy - copies a string from source to dest.
 * @dest: The destination.
 * @src: The source.
 *
 * Description: functions as described above.
 * Return: returns dest.
 */
char *str_copy(char *dest, char *src)
{
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	len = _strlen(src);
	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

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
	char *aname, *aowner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	bruno = malloc(sizeof(dog_t));
	if (bruno == NULL)
	{
		free(bruno);
		return (NULL);
	}

	aname = malloc(sizeof(char) * (_strlen(name) + 1));
	if (aname == NULL)
	{
		free(bruno);
		return (NULL);
	}
	aname = str_copy(aname, name);
	bruno->name = aname;
	bruno->age = age;

	aowner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (aowner == NULL)
	{
		free(bruno->name);
		free(bruno->owner);
		free(bruno->age);
		free(aname);
		free(aowner);
		free(bruno);
		return (NULL);
	}
	aowner = str_copy(aowner, owner);
	bruno->owner = aowner;

	return (bruno);
}
