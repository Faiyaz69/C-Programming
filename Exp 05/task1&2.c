/*
    Expt. No : 5
    Title : WAP to find the factorial of a number using iterative and recursive functions.

  
    Name: Faiyaz Shah
    Class & Div: ECS-E
    UIN: 241S044
 */

// finding the factorial of a number using iterative and recursive functions
#include <stdio.h>
// Recursive function to calculate factorial
int factorialRecursive(int n) {
// Base case: if n is 0 or 1, return 1 (factorial of 0 and 1 is 1)
  if (n == 0 || n == 1) {
    return 1;
}
     // Recursive case: multiply n by the factorial of (n-1)
  return n * factorialRecursive(n - 1);
}
// Iterative function to calculate factorial
int factorialIterative(int n) {
  int factorial = 1;// Initialize factorial variable to 1

 // Loop from 1 to n, multiplying the factorial variable by each number   
  for (int i = 1; i <= n; i++) {
  factorial *= i;
}
return factorial; // Return the calculated factorial
}
int main() {
int num, result;
  // take user input
  printf("Enter a number to find its factorial: ");
  scanf("%d", &num);// Read the user input into 'num'
  //giving condition

// Check if the number is negative, as factorial is not defined for negative numbers
if (num < 0) {
  printf("Factorial is not defined for negative numbers.\n");
} else {
    // Calculate factorial using iterative function
  result = factorialIterative(num);
  printf("Factorial of %d using iterative function is: %d\n", num, result);
     // Calculate factorial using recursive function
  result = factorialRecursive(num);
  printf("Factorial of %d using recursive function is: %d\n", num, result);
}
return 0;
}
/*
OUTPUT 
Enter a number to find its factorial: 5
Factorial of 5 using iterative function is: 120
Factorial of 5 using recursive function is: 120
*/
