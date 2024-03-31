#include "monty.h"
/**
 * f_pall - prints the stack all
 * @head: stack head
 * @countInt: no used
 * Return: no return
*/
void _pal(stack_t **head, unsigned int countInt)
{
	stack_t *h;
	(void)countInt;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}