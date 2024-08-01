#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include<string.h>

/**
* _strlen - Entry point of my code
*
* Return: lenght of array
* @s: jua s
*/
int _strlen(const char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}

/**
 * add_node - listita
 * Return: new node
 * @head: pointer to head
 * @str: string to dupe
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);
	while (*head != NULL)
		(*head) = (*head)->next;
	last->len = _strlen(str);
	last->str = strdup(str);
	last->next = *head;
	if (*head == NULL)
		*head = last;
	return (last);
}
