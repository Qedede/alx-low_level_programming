#include <stdio.h>
#include <stdlin.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that contains input
 * @argv: argument that stores string in an array of *char (strings)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_1, num_2, mul;

	if (arg != 3)
		printf("Error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mul = num_1 * num_2;
		printf("%d\n", mul);
	}
	return (0);
}
