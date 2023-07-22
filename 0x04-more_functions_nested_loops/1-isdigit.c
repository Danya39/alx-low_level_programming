#include "main.h"

/**
 * _isdigit - checks if a character is digit
 * @x: the number to be checked
 * Return: 1 for a character that will be digit or 0 for anything else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
