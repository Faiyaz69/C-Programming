/*
    Expt. No : 8 (task 1)
    Title : WAP to  find the length of a string witout using a library function


    Name: Shah Faiyaz Husain Gulam Husain
    Class & Div: ECS-E
    UIN: 241S044  
 */
#include <stdio.h>

int main() {
    // Declare a character array to hold the string input
    char str[100];

    // Initialize an integer variable 'length' to store the length of the string
    int length = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Read the string input from the user and store it in 'str'
    scanf("%s", str);

    // Loop to count the number of characters in the string
    // The loop continues until it reaches the null-terminator '\0', which marks the end of the string
    while (str[length] != '\0') {
        length++; // Increment 'length' for each character in the string
    }

    // Print the length of the string
    printf("The length of the string is: %d\n", length);

    // Return 0 to indicate the program finished successfully
    return 0;
}
/*OUTPUT
Enter a string: abcde
The length of the string is: 5
*/
