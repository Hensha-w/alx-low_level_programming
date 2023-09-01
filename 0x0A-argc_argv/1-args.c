#include <stdio.h>

/*
 * main - print number of arguements
 * @argc: arguement count
 * :argv: arguement vector
 * Return:
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
