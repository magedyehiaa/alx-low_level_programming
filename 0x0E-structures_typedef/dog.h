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

typedef struct dog dog_t;
char *_strcopy(char *d, char *rc);
int _strlen(const char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
