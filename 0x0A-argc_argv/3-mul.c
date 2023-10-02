#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: The count of arguements
 * @argv: The total arguements passed
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc > 3 || argc < 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
