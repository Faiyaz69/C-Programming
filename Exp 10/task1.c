/*
    Expt. No : 10 (task1)
    Title :WAP to add two numbers using pointers.


    Name: Shah Faiyaz Husain Gulam Husain
    Class & Div: ECS-E
    UIN: 241S044
 */
// adding two numbers using pointers
#include <stdio.h>

int main() {
    // Declare integer variables for the two numbers and their sum
    int num1, num2, sum;
    
    // Declare integer pointers to hold the addresses of num1, num2, and sum
    int *ptr1, *ptr2, *ptrSum;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first number and store it in num1
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second number and store it in num2
    scanf("%d", &num2);

    // Assign the address of num1 to ptr1
    ptr1 = &num1;

    // Assign the address of num2 to ptr2
    ptr2 = &num2;

    // Assign the address of sum to ptrSum
    ptrSum = &sum;

    // Dereference the pointers ptr1 and ptr2, add their values, and store the result in sum
    *ptrSum = *ptr1 + *ptr2;

    // Print the sum using dereferencing of pointers to access the values of num1, num2, and sum
    printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, *ptrSum);

    // Return 0 to indicate the program has executed successfully
    return 0;
}
/*OUTPUT
Enter the first number: 20
Enter the second number: 5
Sum of 20 and 5 is 25

*/
