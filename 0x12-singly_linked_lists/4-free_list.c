#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list.
 * @head: head of linked lists
 * Return: None.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
