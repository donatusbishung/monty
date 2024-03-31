#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void freeing_stack(stack_t *head)
{
	stack_t *rat;

	rat = head;
	while (head)
	{
		rat = head->next;
		free(head);
		head = rat;
	}
}