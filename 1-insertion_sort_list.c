#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascending order
 * using the insertion sort algorithm
 * @list: pointer to the head node of the doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *swap, *next;

	if (!list || !*list)
		return;

	swap = (*list)->next;
	while (swap)
	{
		next = swap->next;
		while (swap->prev && swap->prev->n > swap->n)
		{
			swap->prev->next = swap->next;
			if (swap->next)
				swap->next->prev = swap->prev;
			swap->next = swap->prev;
			swap->prev = swap->next->prev;
			swap->next->prev = swap;
			if (swap->prev == NULL)
				*list = swap;
			else
				swap->prev->next = swap;
			print_list(*list);
		}
		swap = next;
	}
}
