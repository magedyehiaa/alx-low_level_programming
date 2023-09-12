#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * _strlen - fsaew
 * @s: str
 * Return: L o s
 */
int _strlen(const char *s)
{
int l = 0;
while (*s++)
l++;
return (l);
}
/**
 * _strcopy - f return megoooooooo
 * @rc: stocpt
 * @d: c st
 * Return: @d
 */
char *_strcopy(char *d, char *rc)
{
int i;
for (i = 0; rc[i]; i++)
d[i] = rc[i];
d[i] = '\0';
return (d);
}
/**
 * new_dog - creaet man dogs
 * @name: name
 * @age:age
 * @owner: owner
 * Return: NULL or strc
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char)) * (_strlen(owner + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
 
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
