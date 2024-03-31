#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @countInt: line number
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int countInt)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	if (x->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	rat = x->next->n % x->n;
	x->next->n = rat;
	*head = x->next;
	free(x);
}