#include <stdio.h>

/**
 * main - this program prints the number of arguments passed into it
 *		excluding the name of the program.
 *
 * @argc: stores number of command line arguments passed by the user
 * @argv: array of character pointers listing all the arguments
 *
 * Return: returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
