#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts strings to numbers
 * @s: string to be converted
 * Return: converted number
 */

int _atoi(char *s)
{
	double nb = 0, sign = 1;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			i++;
			if (s[i] <= '9' && s[i] >= '0')
				sign *= -1;
			else
				continue;
		}
		if (s[i] <= '9' && s[i] >= '0')
		{
			nb = nb * 10 + (s[i] - '0');
			i++;
			if (s[i] > '9' || s[i] < '0')
				break;
		}
		else
			i++;
	}
	nb *= sign;
	return (nb);
}
