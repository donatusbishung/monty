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
				{"push", f_push}, {"pall", f_pal}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
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