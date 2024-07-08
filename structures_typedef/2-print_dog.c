#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - perris
 *return: boid
 *@name: nombre
 *@owner: dueÃo
 *@age: edad
 *@d: struct on dog.h
 */
void print_dog(struct dog *d)
{
printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
