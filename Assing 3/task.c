/*
  Roll No.: 36
  Student Name: Faiyaz Shah
  Program Title: Wap for a menu driven calculator 

  Task Given By:
    - Roll No. of Assignee: 14
    - Assignee Name: Ahmed farooqui
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Guess the Number Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess it?\n");

    // Game loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++; // Increment attempt counter

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
/*
Welcome to the Guess the Number Game!
I have selected a number between 1 and 100.
Can you guess it?
Enter your guess: 85
Too high! Try again.
Enter your guess: 45
Too low! Try again.
  */