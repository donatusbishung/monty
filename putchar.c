#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @countInt: line_number
 * Return: no return
*/
void f_pchar(stack_t **head, unsigned int countInt)
{
	stack_t *x;

	x = *head;
	if (!x)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (x->n > 127 || x->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", x->n);
}