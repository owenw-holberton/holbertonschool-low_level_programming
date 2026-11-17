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

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		size = sizeof(str);
		str_cp = malloc(sizeof(char) * size);
		i = 0;

		while (i <= size)
		{
			str_cp[i] = str[i];
			i++;
		}
	}
	return (str_cp);
}
