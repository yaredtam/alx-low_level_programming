#include "main.h"

/**
 * _strcmp - compares two strings
 * @dest: string to be compared
 * @src: string to be compared
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while((s1[i] != '\n') || (s2[i] != '\n'))
	{
		if(s1[i] > s2[i] || s1[i] < s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
