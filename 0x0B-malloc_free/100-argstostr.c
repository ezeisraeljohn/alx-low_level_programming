#include <malloc.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @argc: Number of command line arguments
 * @argv: A pointer variable to a pointer to char array of
 * command line arguments.
 *
 * Return: A pointer to a new string, NULL if it fails
 */
char *argstostr(int argc, char **argv)
{
	char *concat_string;
	int i, length;

	if (argc == 0 || argv == NULL)
		return (NULL);

	length = 0;

	for (i = 0; i < argc; i++)
		length += strlen(argv[i]) + 1;


	concat_string = (char *) malloc(length * sizeof(char) + 1);

	if (concat_string == NULL)
		return (NULL);


	concat_string[0] = '\0';

	for (i = 0; i < argc; i++)
	{
		strcat(concat_string, argv[i]);
		strcat(concat_string, "\n");
	}

	return (concat_string);
}
