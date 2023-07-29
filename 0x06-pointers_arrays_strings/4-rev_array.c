#include "main.h"

/**
 * reverse_array - reverse thecontent ofan array of function
 * @a: the array of integers to be reserved
 * @n: the number of element of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int index, temp;
	
	for (index = n - 1; index >=  n / 2; index--)
	{
		temp = a[n - 1 -index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
