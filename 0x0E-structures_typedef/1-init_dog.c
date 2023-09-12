#include "dog.h"
/**
 * init_dog - the init dog MeGoOo
 * @d: init
 * @name: the name
 * @age: float age
 * @owner: the owner name
 * Return: voids
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name
d->age = age
d->owner = owner
	}
}
