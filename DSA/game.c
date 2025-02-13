#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100], result, guess, attempts = 3;

    // Filling the array with numbers from 1 to 100
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }

    // Taking user input for the result (number to be guessed)
    printf("Enter a number between 1 and 100 (this will be the correct answer): ");
    scanf("%d", &result);

    // Clear screen (works on Windows; for Linux/Mac use "clear")
    system("cls");

    // Validate that the result is within the correct range
    if (result < 1 || result > 100) {
        printf("Invalid number! Please restart the program and enter a number within range.\n");
        return 0;
    }

    // Game loop for 3 attempts
    for (int i = 0; i < attempts; i++) {
        printf("Attempt %d: Guess the number: ", i + 1);
        scanf("%d", &guess);

        if (guess == result) {
            printf("Congratulations! You guessed the correct number: %d\n", result);
            return 0;  // Exit the program on correct guess
        } else if (guess < result) {
            printf("Wrong attempt! The correct number is higher than your guess.\n");
        } else {
            printf("Wrong attempt! The correct number is lower than your guess.\n");
        }
    }

    // If the user fails after 3 attempts
    printf("You Lose! The correct number was: %d\n", result);
    return 0;
}
