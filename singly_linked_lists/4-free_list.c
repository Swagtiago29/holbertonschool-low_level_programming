#include <stdio.h>
#include "lists.h"
#include "main.h"
#include <stdlib.h>

/**
 * print_list - listita
 * Return: number of nodes
 * @h: hhhhhhh
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
