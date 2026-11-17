#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - Concatenates two strings
*
* @s1: first part of the concatenated string
* @s2: second half
*
* Return: ptr
*/

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int i = 0;
	int j = 0;
	int size = 0;
	char *cbn_s;

	/* Calculate size of the array */
	while (s1[i] != '\0')
	{
		len_s1 += 1;
		i++;
	}

	/* Reset i to 0 */
	i = 0;

	while (s2[i] != '\0')
	{
		len_s2 += 1;
		i++;
	}

	size = len_s1 + len_s2;
	cbn_s = malloc(sizeof(char) * size + 1);

	/* Handle malloc return */
	if (cbn_s == NULL)
		return (NULL);

	i = 0;
	while (j < len_s1)
	{
		cbn_s[j] = s1[i];
		j++;
		i++;
	}

	i = 0;
	while (j < size)
	{
		cbn_s[j] = s2[i];
		j++;
		i++;
	}

	return (cbn_s);
}
