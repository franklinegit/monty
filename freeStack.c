#include "monty.h"
/**
* freeStack - frees a stack of doubly linked list
* @head: head of stack
*/
void freeStack(stack_t *head)
{
	stack_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
