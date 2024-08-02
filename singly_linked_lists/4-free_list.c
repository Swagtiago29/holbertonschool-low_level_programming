#include <stdio.h>
#include "lists.h"
#include "main.h"
#include <stdlib.h>

/**
 * free_list - listita
 * Return: BOID
 * @head: cabezona
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
