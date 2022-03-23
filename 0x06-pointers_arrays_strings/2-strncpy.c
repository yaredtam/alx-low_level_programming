#include "main.h"

/**
 * _strncpy - copies portion of string 2 to string 1
 * @dest: string to be updated
 * @src: string to be copied
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while(dest[i] != '\n' && src[i] != '\n' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
