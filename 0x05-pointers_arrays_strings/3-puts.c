#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer pointing to the first int
 * @b: pointer pointing to the second int
 * Return: void
 */
void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str++);
	}
	_putchar("\n");
}
