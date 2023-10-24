#include "lists.h"

/**
* add_nodeint_end - adds a node to the end of a line
* @head: the pointer pointing to the head
* @n: data to be added
* Return: addresses
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;

	}

	return (*head);
}
