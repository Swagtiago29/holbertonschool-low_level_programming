#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - info general del perro
 * @name: nombre del rope
 * @age: edad del rope
 * @owner: due√o del rope
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
