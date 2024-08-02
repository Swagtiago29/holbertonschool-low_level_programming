#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * priny_dlistint - listita
 * Return: number of nodes
 * @h: hhhhhhh
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->n < 0)
			printf("%u\n", h->n);
		else
			printf("%u\n", h->n);
		h = h->next;
	}
	return (i);
}
