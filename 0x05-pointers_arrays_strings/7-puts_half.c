#include "main.h"

/**
 * puts_half - This function prints the second half of a string
 *
 * @str: parameter to be passed
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i + 1 % 2 != '0')
	{
		n = (i - 1) / 2;
	}

	else
	{
		n = (i / 2);
	}
	n++;

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
