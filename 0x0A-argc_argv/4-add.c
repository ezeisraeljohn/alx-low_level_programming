#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive integer
 * @argc: counts the number
 * @argv: The arguements
 *
 * Return: Return the result of the multiplication
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *ptr;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			while (*ptr != '\0')
			{
				if (*ptr < '0' || *ptr > '9')
				{
					printf("Error\n");
					return (1);
				}
				ptr++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
