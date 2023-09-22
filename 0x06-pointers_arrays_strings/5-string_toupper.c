/**
 * string_toupper - turns strings to uppercase
 * @s: parameter to be used
 *
 * Return: returns the lowwrcase letter
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
