#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The operand used
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int count;
	int start;
	int end;
	char swap;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	start = 0;
	end = count - 1;
	while (start < end)
	{
		swap = s[start];
		s[start] = s[end];
		s[end] = swap;
		start++;
	}
}
