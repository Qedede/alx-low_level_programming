#include <stdio.h>

/**
 * main - print the alphbets in lowercase
 * except q and e
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			ptchar(lc);
	}

	putchar('\n');

	return (0);
}
