#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - Entry point of my code
*
* Return: void
* @d: destino
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
