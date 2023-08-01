#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees the list
 *
 * @head: describes an argument of the list
 *
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
