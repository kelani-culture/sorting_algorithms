#include "sort.h"

#define TRUE 0
#define FALSE 1

/**
 * cocktail_sort - sort a linked list using cocktail sort
 * @list: pointer to the linked list
 */

void swapNodes(listint_t *node1, listint_t *node2);
void cocktail_sort_list(listint_t **list)
{
	listint_t *start = *list, *end = NULL, *current;
	int cocktailed = FALSE;

	while (cocktailed == FALSE)
	{
		cocktailed = TRUE;
		current = start;

		/* forward swap */
		while (current != end)
		{
			if (current->n < current->next->n)
			{
				swapNodes(current, current->next);
				cocktailed = FALSE;
			}
			current = current->next;
		}

		if (cocktailed == TRUE)
			break;

		/* backward swap */
		end = current;
		while (current->prev != start)
		{
			if (current->n < current->prev->n)
			{
				swapNodes(current, current->prev);
				cocktailed = FALSE;
			}
			current = current->prev;
		}
		start = current->next;
	}
}

/**
 * swapNodes - swap two adjacent nodes
 * @node1: first node to swap
 * @node2 second node too swap
 */

void swapNodes(listint_t *node1, listint_t *node2)
{
	listint_t* temp;
	if (node1 == NULL || node2 == NULL || node1 == node2)
        return; /*No swapping needed*/

    	/*Update prev and next pointers of node1 and node2*/
	if (node1->prev != NULL)
        	node1->prev->next = node2;
	else
	{
		/*If node1 is the head, update the head*/
		node1->prev = node2;
	}
	if (node2->next != NULL)
		node2->next->prev = node1;
	else
	{
		/* If node2 is the tail, update the tail*/
		node2->prev->next = NULL;
	}

	/* Swap prev and next pointers of node1 and node2*/
	temp = node1->prev;
	node1->prev = node2->prev;
	node2->prev = temp;

	temp = node1->next;
	node1->next = node2->next;
	node2->next = temp;
}
