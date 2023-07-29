#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares pointer to string
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 * Return: if str1 < str2, the negative diffrence
 * of the first unmatched characters
 * If str1 == str2, 0.
 * If str1 > str2, the positive diffrence of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
