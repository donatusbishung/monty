#include "monty.h"
/**
 * f_push - add node
 * @head: stack head
 * @countInt: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int countInt)
{
	int n, j = 0, flags = 0;

	if (tax.arg)
	{
		if (tax.arg[0] == '-')
			j++;
		for (; tax.arg[j] != '\0'; j++)
		{
			if (tax.arg[j] > 57 || tax.arg[j] < 48)
				flags = 1; }
		if (flags == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", countInt);
			fclose(tax.file);
			free(tax.content);
			freeing_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", countInt);
		fclose(tax.file);
		free(tax.content);
		freeing_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(tax.arg);
	if (tax.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}