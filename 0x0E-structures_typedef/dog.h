#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog str M EgOoO
 * @name: name
 * @age: age
 * @owner: owner
 * Description: Make dogs
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
