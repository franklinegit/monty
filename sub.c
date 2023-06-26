#include "monty.h"
/**
  *_sub-  subtracts top element of the stack from second top element
  *@head: stack head
  *@count: line_number
  *Return: nothing
 */
void _sub(stack_t **head, unsigned int count)
{
	stack_t *ptr;
	int sus, nodes;

	ptr = *head;
	for (nodes = 0; ptr != NULL; nodes++)
		ptr = ptr->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	sus = ptr->next->n - ptr->n;
	ptr->next->n = sus;
	*head = ptr->next;
	free(ptr);
}
