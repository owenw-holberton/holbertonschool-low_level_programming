#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exits on failure
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory, or exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
