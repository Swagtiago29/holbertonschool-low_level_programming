#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - info general del perro
 * @name: nombre del rope
 * @age: edad del rope
 * @owner: due�o del rope
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
