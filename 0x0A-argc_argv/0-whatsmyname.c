#include <stdio.h>

/**
 * main - prints out the name of the c file
 * @argc: the count
 * @argv: the pointer to the string
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
