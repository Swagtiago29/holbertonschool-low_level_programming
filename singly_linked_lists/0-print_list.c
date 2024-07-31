#include <stdio.h>
#include "lists.h"
#include "main.h"
#include <stdlib.h>

/**
 *print_list - listita
 *return: number or nodes
 *@name: nombre
 *@owner: dueÃo
 *@age: edad
 *@d: struct on dog.h
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->str == NULL)
		{	
			printf("[0] (nil)");
			return (i);
		}
		else 
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
