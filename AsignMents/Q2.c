#include <stdio.h>

int main() {
    int password, attempts = 0, max_attempts = 5;
    const int correct_password = 1234;

    while (attempts < max_attempts) {
        printf("Enter your password: ");
        scanf("%d", &password);

        if (password == correct_password) {
            printf("Password correct! Mobile device unlocked.\n");
            break;
        } else {
            attempts++;
            printf("Incorrect password. Attempts remaining: %d\n", max_attempts - attempts);
        }
    }

    if (attempts == max_attempts) {
        printf("Maximum attempts exceeded. Mobile device resetting...\n");
    }

    return 0;
}