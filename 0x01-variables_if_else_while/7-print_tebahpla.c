#include <stdio.h>

/**
 * main - prints the lowercase alphabete reverse,
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a';  ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
