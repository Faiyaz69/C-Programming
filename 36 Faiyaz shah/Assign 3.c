/*
    Roll No.: 12
  Student Name: Shah Faiyaz
  Program Title: Wap for a menu driven calculator 

  Task Given By:
    - Roll No. of Assignee: 42
    - Assignee Name: Ifham Ansari
 */

#include <stdio.h>

int main() {
    int number;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is Even.\n", number);
    } else {
        printf("%d is Odd.\n", number);
    }

    return 0;
}

/* 
OUTPUT

Enter an integer: 2
2 is Even.

*/

