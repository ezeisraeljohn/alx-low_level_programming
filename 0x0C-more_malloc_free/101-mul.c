#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isNumeric(const char *str) 
{
	while (*str) 
	{
		if (*str < '0' || *str > '9')
			return false;
		str++;
	}
	return true;
}

int main(int argc, char *argv[]) 
{
	if (argc != 3) 
	{
		fprintf(stderr, "Error\n");
		return 98;
	}

	char *num1_str = argv[1];
	char *num2_str = argv[2];

	if (!isNumeric(num1_str) || !isNumeric(num2_str)) 
	{
		fprintf(stderr, "Error\n");
		return 98;
	}

	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);

	int result = num1 * num2;

	printf("%d\n", result);

	return 0;
}

