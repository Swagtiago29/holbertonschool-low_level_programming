#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - perris
 *return: Always 0 
 *@name: nombre
 *@owner: dueÃo
 *@age: edad
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *nuevi_perri;

nuevi_perri = malloc(sizeof(dog_t));
if (nuevi_perri == NULL)
{
	free(nuevi_perri);
	return (NULL);
}
nuevi_perri->name = name;
nuevi_perri->age = age;
nuevi_perri->owner = owner;
return (nuevi_perri);
}
