#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Creates an array of chars and initalise
* it with char
*
* @size: size of the array
* @c: char to initalise the array with
*
* Return: ptr
*/


char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);

	if (size == NULL)
	{
		return (NULL);
	}
	else
	{

		unsigned int i;

		i = 0;
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	return (ptr);
	}
}
