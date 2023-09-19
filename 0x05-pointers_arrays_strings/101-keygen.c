#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_password -  Generates a random password based on the provided character set.
 * @password: The buffer to store the generated password.
 * @length: The length of the password to be generated.
 *
 * Retrun: Nothing
 */
void generate_password(char *password, int length);

int main();

void generate_password(char *password, int length) {
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_size = sizeof(charset) - 1;
	int i;

	for (i = 0; i < length; i++) {
		int index = rand() % charset_size;
		password[i] = charset[index];
	}

	password[length] = '\0';
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main() {
	char password[PASSWORD_LENGTH + 1];
	srand(time(NULL));

	generate_password(password, PASSWORD_LENGTH);

	printf("Generated Password: %s\n", password);

	return 0;
}

