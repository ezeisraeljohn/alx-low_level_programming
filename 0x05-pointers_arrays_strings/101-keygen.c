#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#define PASSWORD_LENGTH 100
#define CHECKSUM 1277  

/**
 * generatePassword - A function that generates a random password and places it
 * inside an allocated variable named password
 * @sum: A pointer to a variable that keeps track of the generated password
 *       ASCII value sum.
 * Return: The allocated char* password
 */
char *generatePassword(int *sum) {
    const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *password = malloc(PASSWORD_LENGTH + 1);
    if (password == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));
    for (int i = 0; *sum < CHECKSUM; ++i) {
        password[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
        *sum += (int) password[i];
    }

    password[CHECKSUM] = '\0';  // Null-terminate the password
    return password;
}

int main() {
    int sum = 0;
    char *password = generatePassword(&sum);

    // Print the generated password
    printf("Generated Password: %s\n", password);
    printf("Checksum: %d\n", sum);

    // Free the allocated memory for the password
    free(password);

    return 0;
}

