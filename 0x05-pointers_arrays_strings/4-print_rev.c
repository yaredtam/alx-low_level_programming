#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @s: pointer of the string
 * Return: void
 */
void print_rev(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
		++t;
		while (s < t--)
		_putchar(*t);
		_putchar('\n');
	}
}
