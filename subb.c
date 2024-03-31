#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@countInt: line_number
  *Return: no return
 */
void sub(stack_t **head, unsigned int countInt)
{
	stack_t *rat;
	int sos, allNodes;

	rat = *head;
	for (allNodes = 0; rat != NULL; allNodes++)
		rat = rat->next;
	if (allNodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	rat = *head;
	sos = rat->next->n - rat->n;
	rat->next->n = sos;
	*head = rat->next;
	free(rat);
}