#include "sort.h"

/**
* insertion_sort_list - sort a doubly linked list of integers
* @list: head pointer
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	current = (*list)->next;

	while (current)
	{
		temp = current->next;
		prev = current->prev;

		while (prev && current->n < prev->n)
		{
			if (current->next)
				current->next->prev = prev;

			prev->next = current->next;
			current->prev = prev->prev;
			current->next = prev;
			prev->prev = current;

			if (current->prev)
				current->prev->next = current;
			else
				*list = current;

			print_list(*list);
			prev = current->prev;
		}
		current = temp;
	}
}
