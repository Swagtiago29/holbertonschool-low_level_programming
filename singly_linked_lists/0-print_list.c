#include <stdio.h>
#include "lists.h"
#include "main.h"
#include <stdlib.h>

/**
 * print_list - listita
 * Return: number of nodes
 * @h: hhhhhhh
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
