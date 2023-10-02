#include <stdio.h>

/**
 * main - Prints out arguements passed in the command line
 * @argc: The total count of arguements
 * @argv: pointer to the strings
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	(void)argv;/*unused variable*/
	printf("%d\n", argc - 1);
	return (0);
}
