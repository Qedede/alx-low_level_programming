#include "main.h"

/**
 * print_alphbet - prints alpha in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);

	_putchar('\n');
}
