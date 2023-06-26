#include "monty.h"
/**
 * newNode - creates new node at stack head
 * @head: pointer to head of the stack
 * @n: new_value
 * Return: nothing
*/
void newNode(stack_t **head, int n)
{

	stack_t *new_node, *ptr = *head;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ptr)
		ptr->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
