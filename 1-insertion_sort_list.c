#include "sort.h"
/**
 * insertion_sort_list - insertion of algorithms sort list
 * @list: sort doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			node = listNode(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}
/**
 *swap_node - swaps nodes in a listint_t
 *@node: node to swap
 *@list: list
 *Return: pointer to return a node
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *insert = node->prev, *run = node;
	/*NULL, 19, 48, 7, 70, 11, NULL*/

	insert->next = run->next;
	if (run->next)
		run->next->prev = insert;
	run->next = insert;
	run->prev = insert->prev;
	insert->prev =run;
	if (run->prev)
		run->prev->next =run;
	else
		*list = run;
	return (run);
}
