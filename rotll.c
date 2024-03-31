#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@countInt: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int countInt)
{
	stack_t *temp = *head, *rat;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	rat = (*head)->next;
	rat->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = rat;
}