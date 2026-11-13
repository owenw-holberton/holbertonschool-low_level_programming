#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be processed.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int i = 0;
	int l = 0;
	int n;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l + 1) / 2;
	}

	i = l - n;
	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
