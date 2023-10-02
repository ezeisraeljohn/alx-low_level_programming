#include <stdio.h>

/**
 * main - This prints out all arguements it receives
 * @argc: The count of total arguements
 * @argv: All arguements
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
