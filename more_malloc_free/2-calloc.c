#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates zero-initialized memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory set to 0, or NULL on failure/zero size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		mem[i] = 0;

	return ((void *)mem);
}
