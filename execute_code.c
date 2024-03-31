#include "monty.h"
/**
* execute - executing the opcode
* @stack: head linked list - stack
* @countInt: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute_code(char *content, stack_t **stack, unsigned int countInt, FILE *file)
{
	instruction_t opsty[] = {
				{"push", _push}, {"pall", _pal}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", add},
				{"nop", _nop},
				{"sub", sub},
				{"div", _div},
				{"mul", _mul},
				{"mod", mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", rotl},
				{"rotr", rotr},
				{"queue", f_queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *opo;

	opo = strtok(content, " \n\t");
	if (opo && opo[0] == '#')
		return (0);
	tax.arg = strtok(NULL, " \n\t");
	while (opsty[i].opcode && opo)
	{
		if (strcmp(opo, opsty[i].opcode) == 0)
		{	opsty[i].f(stack, countInt);
			return (0);
		}
		i++;
	}
	if (opo && opsty[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", countInt, opo);
		fclose(file);
		free(content);
		freeing_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}