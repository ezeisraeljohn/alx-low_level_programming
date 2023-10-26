/**
 * binary_to_uint - Converts a binary to an unsigned int
 * @binary: The binary to be converted to an int
 *
 * Return: Return the unsigned int of the binary
 */

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *binary)
{
	unsigned int power = 1;
	unsigned int result = 0;
	unsigned int len;
	unsigned int i;

	if (binary == NULL)
		return (0);

	len = strlen(binary);

	for (i = 0; i < len; i++)
	{
		if (binary[i] != '0' && binary[i] != '1')
			return (0);
	}

	for (i = len - 1; (int)i >= 0; i--)
	{
		if (binary[i] == '1')
			result += power;
		power *= 2;
	}

	return (result);
}

