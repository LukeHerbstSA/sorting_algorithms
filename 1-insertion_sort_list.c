#include "sort.h"

/**
	* selection_sort - void func
	* Description: sorts list using insertion sort
	* @array: passed ptr to int array
	* @size: passed size of array
	*/
void insertion_sort(listint_t **list)
{
	listint_t *previous = NULL;
	listint_t *listint = NULL;
	listint_t *sublist = NULL;
	listint_t *previous_prev = NULL;
	listint_t *holder = NULL;
	int i = 0;

	if (listint == NULL)
		return;
	listint = *list;
	while (listint != NULL)
	{
		sublist = listint;
		while (sublist->prev != NULL && (sublist->n < (sublist->prev)->n)) /*check if curr n is smaller than prev n*/
		{
			previous = sublist->prev;
			previous_prev = previous->prev; /*previous prev may be null, which is fine*/
			if (previous_prev != NULL) /*if not null, change the next ptr to point to listint*/
				previous_prev->next = sublist;
			holder = sublist->next;
			sublist->next = previous;
			previous->next = holder;
			sublist->prev = previous_prev; /*its fine if previous_prev is NULL, this is expected in some cases*/
			previous->prev = sublist;
			print_array(list);
			sublist = sublist->prev;
		}
		listint = listint->next;
	}
}
