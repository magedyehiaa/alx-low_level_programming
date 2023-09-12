#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creat doooog
 * @name: name
 * @age: meeeegoooog age of
 * @owner: owner
 * Return: void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m;

	m = malloc(sizeof(dog_t));
	if (m == NULL)
		return (NULL);
	
	if (name == NULL)
	{
		free(m);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(m);
		free(name);
		return (NULL);
	}
	m->name = name;
	m->age = age;
	m->owner = owner;
	return (m);
}
