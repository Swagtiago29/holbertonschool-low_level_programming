#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
struct dog *d;
{
char *name;
float age;
char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog *d;
d->name = name;
d->age = age;
d->owner = owner;
}
