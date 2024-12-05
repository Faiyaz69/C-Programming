/*
    Expt. No : 10 (task 2)
    Title : WAP to print the elements of an array in reverse order using pointers.


    Name: Shah Faiyaz
    Class & Div: ECS-E
    UIN: 241S044
 */
#include <stdio.h>

int main() {
    // Declare an integer variable 'n' to store the number of elements in the array
    int n;

    // Prompt the user to enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    // Read the number of elements from the user and store it in 'n'
    scanf("%d", &n);

    // Declare an array of integers with 'n' elements
    int arr[n];

    // Declare a pointer 'ptr' that points to the first element of the array 'arr'
    int *ptr = arr;

    // Prompt the user to enter 'n' elements of the array
    printf("Enter %d elements:\n", n);

    // Loop to read 'n' elements into the array using pointer arithmetic
    for (int i = 0; i < n; i++) {
        // Read the 'i'th element of the array using pointer arithmetic (ptr + i)
        scanf("%d", ptr + i);
    }

    // Output a message indicating the array elements will be printed in reverse order
    printf("Array elements in reverse order:\n");

    // Loop to print the elements of the array in reverse order using pointer arithmetic
    for (int i = n - 1; i >= 0; i--) {
        // Dereference the pointer to get the value of the element at position (ptr + i)
        printf("%d ", *(ptr + i));
    }

    // Print a newline after printing the reversed array
    printf("\n");

    // Return 0 to indicate the successful execution of the program
    return 0;
}
/*OUTPUT
Enter the number of elements in the array: 2
Enter 2 elements:
12
13
Array elements in reverse order:
13 12 
*/
