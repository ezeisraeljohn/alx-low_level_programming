#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints characters to the output
 * @c: the operand to be worked on
 *
 * Return: Return the character
 */
int _putchar(int c)
{
	 return write(1, &c, 1);
}
