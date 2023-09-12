#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - lenth store MRHOOOOOZOD
 * @m: pointer to m
 *
 * Return: 0
 *
 */
int _strlen(char *m)
{
	int count = 0;

	if (m != '\0')
	{
		while (*(m + count) != '\0')
			count++;
	}
	return (count);
}
/**
 * _strcpy - copies the string with \0 to the buffer
 * @d: pointer to dest
 * @s: pointer to string
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *d, char *s)
{
	int i;
	i = 0;
	while (*(s + i) != '\0')
	{
		*(d + i) = *(s + i);
		i++;
	}
	*(d + i) = '\0';
	return (d);
}
/**
 * new_dog - creates a new dog M E g OoO
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int ln, lo;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	ln = _strlen(name);
	new_dog->name = malloc(sizeof(char) * (ln + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	lo = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * (lo + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	return (new_dog);
}
