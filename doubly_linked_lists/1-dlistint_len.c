#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - listita
 * Return: number of nodes
 * @h: hhhhhhh
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
