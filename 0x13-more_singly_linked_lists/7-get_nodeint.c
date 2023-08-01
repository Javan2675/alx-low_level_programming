#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 *
 * @head: head of the listint list
 *
 * @index: node to stop at
 *
 * Return: Pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
