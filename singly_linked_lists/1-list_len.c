#include <stdio.h>
#include "lists.h"
#include "main.h"
#include <stdlib.h>

/**
 * print_list - listita
 * Return: number of nodes
 * @h: hhhhhhh
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
		
	}
	return (i);
}
