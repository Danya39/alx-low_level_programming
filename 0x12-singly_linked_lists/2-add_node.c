#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULLo)

	unsigned int LENGTH = 0;

	while (str[LENGTH]
			LENGTH++;
	
	
	new_node->str = strdup(str);

	 if (new_node->str == NULL)
	 {
		 free(new_node);
		 return (NULL);
	 }
	 new_node->next = head;
	 head = new_node;
	 return (head);
}
