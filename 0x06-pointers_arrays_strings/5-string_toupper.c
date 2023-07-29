#include "main.h"

/**
 * string_toupper - changes alllower case letters
 * of a string to uppercase
 * @str: the string to be changed
 * Return: a ponter to the changed string
 */

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - ('a' - 'A');
		}
	}
	return (str);
}
