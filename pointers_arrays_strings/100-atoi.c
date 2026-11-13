#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	int found_digit = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		found_digit = 1;
		if (res > (2147483647 - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483648);
			}
		}
		res = res * 10 + (s[i] - '0');
		i++;
	}

	if (!found_digit)
	{
		return (0);
	}

	return (res * sign);
}
