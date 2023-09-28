#include "main.h"
#include <unistd.h>

/**
 *  * _putchar - Prints character to the standard output
 *   * @c: character to be outputed
 *    *
 *     * Return: c
 *      */
int _putchar(int c)
{
	        return (write(1, &c, 1));
}
