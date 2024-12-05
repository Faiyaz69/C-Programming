/*
    Expt. No : 7 (task 1)
    Title : WAP to find the largest element in an array.


    Name: Faiyaz Shah
    Class & Div: ECS-E
    UIN: 241S044
 */
#include <stdio.h>

int main() {
    // Declare an integer variable to hold the size of the array
    int n;

    // Prompt the user to enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    
    // Read the number of elements from user input
    scanf("%d", &n);
    
    // Declare an array with 'n' elements
    int arr[n];

    // Prompt the user to enter the elements of the array
    printf("Enter %d elements:\n", n);

    // Loop to read 'n' elements into the array
    for (int i = 0; i < n; i++) {
        // Read each element into the array
        scanf("%d", &arr[i]);
    }

    // Initialize the variable 'largest' with the first element of the array
    int largest = arr[0];

    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // If the current element is greater than 'largest', update 'largest'
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Print the largest element in the array
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
/* OUTPUT


Enter the number of elements in the array: 5
Enter 5 elements:
8
9
10
11
12
The largest element in the array is: 12

*/
