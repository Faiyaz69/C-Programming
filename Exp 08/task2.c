/*
    Expt. No : 8 (task 2)
    Title : WAP to check if the entered string is palindrome or not.


    Name: Shah Faiyaz Husain Gulam Husain
    Class & Div: ECS-E
    UIN: 241S044
 */

// checking if the entered string is palindrome or not
#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store the string input by the user
    char str[100];

    // Declare integer variables 'length' to store the string length and 'isPalindrome' to track palindrome status
    int length, isPalindrome = 1;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Read the input string from the user and store it in 'str'
    scanf("%s", str);

    // Initialize 'length' to 0, which will be used to calculate the length of the string
    length = 0;

    // Calculate the length of the string by counting the number of characters until the null terminator '\0'
    while (str[length] != '\0') {
        length++; // Increment the 'length' for each character in the string
    }

    // Loop to check if the string is a palindrome
    // A palindrome is a string that reads the same forwards and backwards, so we compare characters from both ends
    for (int i = 0; i < length / 2; i++) {
        // If any character from the beginning does not match the corresponding character from the end
        if (str[i] != str[length - i - 1]) {
            // Set 'isPalindrome' to 0, meaning the string is not a palindrome
            isPalindrome = 0;
            // Exit the loop early since we found a mismatch
            break;
        }
    }

    // Check if 'isPalindrome' is still 1 (i.e., the string is a palindrome)
    if (isPalindrome) {
        // If true, print that the string is a palindrome
        printf("The string is a palindrome.\n");
    } else {
        // If false, print that the string is not a palindrome
        printf("The string is not a palindrome.\n");
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}

/* OUTPUT
Enter a string: mam
The string is a palindrome.
*/
