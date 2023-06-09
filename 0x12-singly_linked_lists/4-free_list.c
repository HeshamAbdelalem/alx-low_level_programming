#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
