#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return Null;

	dup = strdup(str);
	if (dup == NULL);
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = dup;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
