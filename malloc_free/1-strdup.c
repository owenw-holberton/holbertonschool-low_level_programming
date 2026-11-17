#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* _strdup - function that return a ptr containing copy of a string
*
* @str: String we want to make copy of
*
* Return: ptr
*/

char *_strdup(char *str)
{
	int size;
	char *str_cp;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		j = 0;
		size = 0;

		/* Find the length of the str */
		while (str[i] != '\0')
		{
			size += 1;
			i++;
		}

		str_cp = malloc((sizeof(char) * size) + 1);

		/* Handle malloc return */
		if (str_cp == NULL)
			return (NULL);

		while (j <= size)
		{
			str_cp[j] = str[j];
			j++;
		}
	}
	return (str_cp);
}
