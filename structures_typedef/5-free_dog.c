#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* char *_strncpy - Entry point of my code
*
* Return: Always 0.
* @dest: destino
* @src: string of chars
* @n: n?
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
