#include "main.h"

/**
 * print_to_98- Prints all numbers to 98
 * Use a comma followed by a space
 * @n: the number to be counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);

	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
