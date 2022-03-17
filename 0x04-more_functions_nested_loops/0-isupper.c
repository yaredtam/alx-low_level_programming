#include "main.h";

/**
 * _isupper - checks if variable c is in uppercase
 * RETURN: 1 if c is uppercase, 0 otherwise 
 */

int _isupper(int c)
{
	if(c >= 65 && c<=90)
	{
		return (1);
	}
	return (0);
}
