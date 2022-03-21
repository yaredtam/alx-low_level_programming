#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer pointing to the first int
 * @b: pointer pointing to the second int
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char c;
	for(i = 0; i < strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar("\n");
}
