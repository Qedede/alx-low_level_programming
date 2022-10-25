#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Input
 * Return: Half the input
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	putchar('\n');
}
