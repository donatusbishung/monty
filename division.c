#include "monty.h"
/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @countInt: line_number
 * Return: no return
*/
void _div(stack_t **head, unsigned int countInt)
{
	stack_t *z;
	int lent = 0, rat;

	z = *head;
	while (z)
	{
		z = z->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	z = *head;
	if (z->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	rat = z->next->n / z->n;
	z->next->n = rat;
	*head = z->next;
	free(z);
}