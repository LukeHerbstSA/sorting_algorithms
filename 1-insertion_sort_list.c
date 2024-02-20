#include "sort.h"

/**
	* insertion_sort - void func
	* Description: sorts list using insertion sort
	* @list: passed ptr to doubly int list
	*/
void insertion_sort(listint_t **list)
{
	listint_t *previous = NULL;
	listint_t *listint = NULL;
	listint_t *sublist = NULL;
	listint_t *previous_prev = NULL;
	listint_t *holder = NULL;

	if (list == NULL)
		return;
	listint = *list;
	while (listint != NULL)
	{
		sublist = listint;
		while (sublist->prev != NULL && (sublist->n < (sublist->prev)->n))
		{
			previous = sublist->prev;
			previous_prev = previous->prev; /*previous prev may be null*/
			if (previous_prev != NULL) /*if not null, change nxt to sublist*/
				previous_prev->next = sublist;
			holder = sublist->next;
			sublist->next = previous;
			previous->next = holder;
			sublist->prev = previous_prev;
			previous->prev = sublist;
			print_list(*list);
			sublist = sublist->prev;
		}
		listint = listint->next;
	}
}
