#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_password - This generates random passwords
 * @password: operand 1
 * @length: operand 2
 *
 * Return: Nothing
 */
void generate_password(char *password, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_size = sizeof(charset) - 1;

    for (int i = 0; i < length; i++) {
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

    return (0);
}

