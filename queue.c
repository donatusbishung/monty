#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @countInt: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int countInt)
{
	(void)head;
	(void)countInt;
	tax.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int y)
{
	stack_t *newNode, *rat;

	rat = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
	}
	newNode->n = y;
	newNode->next = NULL;
	if (rat)
	{
		while (rat->next)
			rat = rat->next;
	}
	if (!rat)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		rat->next = newNode;
		newNode->prev = rat;
	}
}