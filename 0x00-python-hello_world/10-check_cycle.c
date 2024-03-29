#include "lists.h"

/**
 * check_cycle - checks if a linked list has a cycle in it
 * @list: linked list to check
 * Return: 1 if there is a cycle, 0 if there is no cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
