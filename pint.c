#include "monty.h"
/**
 * _pint - prints value at the top of the stack, followed by a new line
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void _pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
