#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[14];
	int i;

	separators[0] = ' ';
	separators[1] = '\t';
	separators[2] = '\n';
	separators[3] = ',';
	separators[4] = ';';
	separators[5] = '.';
	separators[6] = '!';
	separators[7] = '?';
	separators[8] = '"';
	separators[9] = '(';
	separators[10] = ')';
	separators[11] = '{';
	separators[12] = '}';
	separators[13] = '\0';

	i = 0;
	while (separators[i] != '\0')
	{
		if (c == separators[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	while (s[i] != '\0')
	{
		if (is_separator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}

	return (s);
}
