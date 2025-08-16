#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>  // for sleep()

#define MAX_ATTEMPTS 5
#define USERNAME "admin"
#define PASSWORD "admin123"

int main() {
    char inputUsername[50], inputPassword[50];
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Username: ");
        scanf("%s", inputUsername);

        printf("Password: ");
        scanf("%s", inputPassword);

        if (strcmp(inputUsername, USERNAME) == 0 && strcmp(inputPassword, PASSWORD) == 0) {
            printf("\nAccess Granted. Welcome, %s!\n", inputUsername);
            return 0;
        } else {
            attempts++;
            printf("Incorrect credentials. Attempt %d of %d.\n", attempts, MAX_ATTEMPTS);
        }

        if (attempts == MAX_ATTEMPTS) {
            printf("\nToo many failed attempts.
Freezing for 30 seconds...\n");
            sleep(30); // freeze
            attempts = 0; // Reset attempts after freeze
        }
    }

    return 0;
}
