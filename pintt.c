#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @countInt: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int countInt)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}