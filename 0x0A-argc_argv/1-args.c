#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers passed to strings
 * Return: always zero
 */

int main(int argc, char *argc[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
