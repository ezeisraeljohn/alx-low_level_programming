/**
 * _strncpy - copy a string
 * @dest: destination string buffer
 * @src: source string buffer
 * @n: number of bytes to write
 *
 * Return: a pointer to the destination string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++) /* ensure exactly n bytes are written */
		dest[i] = '\0';
	return (dest);
}
