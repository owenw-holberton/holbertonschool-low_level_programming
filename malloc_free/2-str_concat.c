#include "main.h"
#include <stdlib.h>

/**
 * find_size_of_str - Computes the length of a string
 * @s: Input string (may be NULL)
 *
 * Return: Length of s, or 0 if s is NULL
 */
int find_size_of_str(char *s)
{
	int size = 0;

	if (s == NULL)
		return (0);

	while (s[size] != '\0')
		size++;

	return (size);
}

/**
 * str_concat - Concatenates two strings into newly allocated memory
 * @s1: First string (treated as empty if NULL)
 * @s2: Second string (treated as empty if NULL)
 *
 * Return: Pointer to newly allocated concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, cbn_size;
	char *cbn_s;
	int i = 0, j = 0;

	len_s1 = find_size_of_str(s1);
	len_s2 = find_size_of_str(s2);
	cbn_size = len_s1 + len_s2;

	cbn_s = malloc(sizeof(char) * (cbn_size + 1));
	if (cbn_s == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (i < len_s1)
		{
			cbn_s[j++] = s1[i++];
		}
	}

	i = 0;
	if (s2 != NULL)
	{
		while (i < len_s2)
		{
			cbn_s[j++] = s2[i++];
		}
	}

	cbn_s[j] = '\0';
	return (cbn_s);
}
