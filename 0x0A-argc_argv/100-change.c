#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the main element
 * @argc: Parameter for total arguements
 * @argv: Parameter for all the arguements
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int i;
	int coin[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coin) / sizeof(coin[0]);
	int min_coins = 0;
	int cents = atoi(argv[1]);

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < num_coins; i++)
		{
			min_coins += cents / coin[i];
			cents %= coin[i];
		}
		printf("%d\n", min_coins);
	}
	return (0);
}
