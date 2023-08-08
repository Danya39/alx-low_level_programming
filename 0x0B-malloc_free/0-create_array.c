#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * creat_array - creates an array of characters
 * @size: the size of the array
 * @c: the char to fill in the array
 * Return: the array full
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
