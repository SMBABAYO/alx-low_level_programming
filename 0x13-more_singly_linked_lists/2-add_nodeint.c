#include "lists.h"

/**
* add_nodeint - add node to the beginning of a list
* @head: pointer to the head pointer
* @n: new int to be created
* Return: head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

		if (*head == NULL)
			new_node->next = NULL;
		else
			new_node->next = *head;
		new_node->n = n;
		*head = new_node;

		return (*head);
}
