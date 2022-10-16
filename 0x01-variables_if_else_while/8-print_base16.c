#include <stdio.h>

/**
 * main - Print all num of Base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char lc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lc = 'a'; lc <= 'f'; la++)
		putchar(lc);

	putchar('\n');

	return (0);
}
