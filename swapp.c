#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @countInt: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int countInt)
{
	stack_t *x;
	int lent = 0, rat;

	x = *head;
	while (x)
	{
		x = x->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	rat = x->n;
	x->n = x->next->n;
	x->next->n = rat;
}