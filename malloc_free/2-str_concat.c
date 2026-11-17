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
	int len_s1;
	int len_s2;
	int cbn_size;
	char *cbn_s;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		len_s1 = 0;
	}	
	else
	{
		len_s1 = find_size_of_str(s1);
	}
		
	if (s2 == NULL)
	{
		len_s2 = 0;
	}
	else
	{
		len_s2 = find_size_of_str(s2);
	}
	
	cbn_size = len_s1 + len_s2;
	cbn_s = malloc(sizeof(char) * cbn_size + 1);

	/* Handle malloc return */
	if (cbn_s == NULL)
		return (NULL);
	
	if (len_s1 == 0)
	{
		cbn_s[j] = '\0';
		j++;
	}
	else
	{
		while (i < len_s1)
		{
			cbn_s[j] = s1[i];
			j++;
			i++;
		}
	}	
	
	i = 0;
	if (len_s2 == 0)
	{
		cbn_s[j] = '\0';
		j++;
	}
	else
	{
		while (i < len_s2)
		{
			cbn_s[j] = s2[i];
			j++;
			i++;
		}
	}
	return (cbn_s);
}

int find_size_of_str(char *s)
{
	int size;
	int i;

	size = 0;
	i = 0;

	while (s[i] != '\0')
	{
		size += 1;
		i++;
	}
	return size;
}
