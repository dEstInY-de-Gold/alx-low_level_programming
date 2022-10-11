#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates length of string
 * @s: input string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * _strcpy - copies one string into another
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int x, lensrc;

	lensrc = _strlen(src) + 1;
	for (x = 0; x < lensrc; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}


/**
 * new_dog - data structure for new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog details.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n;

	n = malloc(sizeof(struct dog));
	if (n == NULL)
		return (NULL);
	n->name = malloc(sizeof(_strlen(name) + 1));
	if (n->name == NULL)
	{
		free(n);
		return (NULL);
	}
	n->age = age;
	n->owner = malloc(sizeof(_strlen(owner) + 1));
	if (n->owner == NULL)
	{
		free(n);
		free(n->name);
		return (NULL);
	}
	_strcpy(n->name, name);
	_strcpy(n->owner, owner);

	return (n);
}
