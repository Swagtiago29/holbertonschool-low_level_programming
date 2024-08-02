#include <stdio.h>
#include "lists.h"
#include "main.h"
#include <stdlib.h>

/**
 * print_list - listita
 * Return: number of nodes
 * @h: hhhhhhh
 */
void free_list(list_t *head);
{
	int i = 0;

	while (head != NULL)
	{
		i = head->next;
		free(head->str);
		free(head->len);
		free(head->next);
		if (head->next == NULL)
	return ();
}
