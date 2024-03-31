#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @countInt: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int countInt)
{
	stack_t *h;
	int lent = 0, rat;

	h = *head;
	while (h)
	{
		h = h->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	rat = h->next->n * h->n;
	h->next->n = rat;
	*head = h->next;
	free(h);
}