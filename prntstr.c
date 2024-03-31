#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @countInt: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int countInt)
{
	stack_t *x;
	(void)countInt;

	x = *head;
	while (x)
	{
		if (x->n > 127 || x->n <= 0)
		{
			break;
		}
		printf("%c", x->n);
		x = x->next;
	}
	printf("\n");
}