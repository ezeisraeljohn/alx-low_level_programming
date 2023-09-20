#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

#define PASSWORD_LENGTH 100
#define CHECKSUM 1277  

char *generatePassword(int *sum) {
	const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *password = malloc(PASSWORD_LENGTH + 1);

	int i;  /* Move variable declaration to the beginning of the block */
	if (password == NULL) {
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}

	srand(time(NULL));
	for (i = 0; *sum < CHECKSUM; ++i) {
		password[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
		*sum += (int) password[i];
	}

	password[CHECKSUM] = '\0';  /* Null-terminate the password */
	return password;
}

int main() {
	int sum = 0;
	char *password = generatePassword(&sum);

	printf("Generated password: %s\n", password);

	/* Compare the generated password to the expected one */
	if (strcmp(password, "Tada! Congrats") == 0) {
		printf("Generated password matches the expected one.\n");
	} else {
		printf("Generated password does not match the expected one.\n");
	}

	free(password);  /* Free the allocated memory */
	return (0);

}


