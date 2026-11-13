#include "main.h"
#define NULL ((void *)0)

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	if (c == '\0')
	{
		return (s + i);
	}

	return (NULL);
}
