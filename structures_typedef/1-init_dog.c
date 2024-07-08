#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - perris
 *return: boid
 *@name: nombre
 *@owner: dueÃo
 *@age: edad
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;
d->name = name;
d->age = age;
d->owner = owner;
}
