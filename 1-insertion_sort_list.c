#include <stdio.h>
#include "sort.h"

/**
* insertion_sort_list - check code
*
* @list: pointer to array of int
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;
	listint_t *tmp;

	if (list == NULL || *list == NULL)
		return;

	curr  = (*list)->next;
	while (curr != NULL)
	{
		tmp = curr;
		while (tmp->prev != NULL && tmp->prev->n > tmp->n)
		{

			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;

			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev != NULL)
				tmp->prev->next = tmp;
			else
				*list = tmp;
			print_list(*list);
		}	
		curr = curr->next;
	}
}
