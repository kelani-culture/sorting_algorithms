#include "sort.h"
#include <stdlib.h>

/**
 * swap_nodes - swap nodes in the list
 * @list: pointer to list
 * @node1: first node
 * @node2: second node
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{

	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;

	if (!node2->prev)
		*list = node2;
	print_list(*list);
}

/**
 * insertion_sort_list - insert sort on a doubly linked list
 * @list: double pointer to linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *key, *j, *temp;
	listint_t *current = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return; /* Empty or single-node list is already sorted*/

	while (current != NULL)
	{
		key = current;
		j = current->prev;

		while (j != NULL && key->n < j->n)
		{
			swap_nodes(list, j, key);
			j = key->prev;
			/*Printing the list after each swap */
			temp = *list;
			while (temp)
				temp = temp->next;
		}
		current = current->next;
	}
}
