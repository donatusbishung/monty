#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @countInt: line number
 * Return: no return
 */
void f_add(stack_t **head, unsigned int countInt)
{
    stack_t *z;
    int lent = 0, rat;

    z = *head;
    while (z)
    {
        z = z->next;
        lent++;
    }
    if (lent < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", countInt);
        fclose(tax.file);
        free(tax.content);
        freeing_stack(*head);
        exit(EXIT_FAILURE);
    }
    z = *head;
    rat = z->n + z->next->n;
    z->next->n = rat;
    *head = z->next;
    free(z);
}