#include "monty.h"
/**
 * f_pop - prints the top of node
 * @head: stack head
 * @countInt: line number
 * Return: no return
*/
void _pop(stack_t **head, unsigned int countInt)
{
	stack_t *x;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	*head = x->next;
	free(x);
}