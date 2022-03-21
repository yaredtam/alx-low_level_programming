#include "main.h"

/**
 * puts_half - print second half of the string
 * @str: string to be printed
 *
 * Return: void funtion
 **/
void puts_half(char *str)
{
	int var, lent;

	lent = _strlen(str);
	if (lent % 2 == 0)
	{
		var = lent / 2;
	}
	else
	{
		var = (lent + 1) / 2;
	}
	while (str[var] != '\0')
	{
		_putchar(str[var]);
		var++;
	}
	_putchar('\n');
}
