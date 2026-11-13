#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string to measure.
 *
 * Return: The length of the string as an integer.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
