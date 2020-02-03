#include "sort.h"
/**
 * insertion_sort_list - sorts a list with the insrtion method
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pNode = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	pNode = *list;
	while (pNode != NULL)
	{
		while (pNode->prev != NULL && pNode->n < pNode->prev->n)
		{
			pNode->prev->next = pNode->next;
			if (pNode->next != NULL)
				pNode->next->prev = pNode->prev;
			pNode->next = pNode->prev;
			pNode->prev = pNode->prev->prev;
			pNode->next->prev = pNode;
			if (pNode->prev == NULL)
				*list = pNode;
			else
				pNode->prev->next = pNode;
			print_list(*list);
		}
		pNode = pNode->next;
	}
}

