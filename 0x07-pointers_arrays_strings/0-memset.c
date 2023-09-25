/**
 * _memset - Fills memory with constant byte
 * @s: memory pointed by s
 * @b: constant byte to be filled with
 * @n: number of times it should be filled
 *
 * Return: the filled memory allocation
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p = b;
		p++;
	}
	return (s);
}
