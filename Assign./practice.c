/*
  Roll No.: 12
  Student Name: Shah Faiyaz
  Program Title: Wap for a menu driven calculator 

  Task Given By:
    - Roll No. of Assignee: 42
    - Assignee Name: Ifham Ansari
*/
#include <stdio.h>
#include <stdlib.h>

// Define a structure for complex numbers
typedef struct complexNumber {
    int real;
    int img;
} complex;

// Function declarations
void basic_operations(int operation);  // Handles +, -, *, /, %
complex add_complex(complex x, complex y);  // Adds two complex numbers
void matrix_addition();  // Adds two matrices

int main() {
    int choice;
    char continue_choice;

start:  // Label for restarting the menu
    // Display menu to the user
    printf("\n\t\t *** Menu Driven Calculator *** \n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Addition of Complex Numbers\n");
    printf("7. Addition of Matrices\n");
    printf("8. Exit\n");

    // Prompt user to select an option
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform operation based on user choice
    switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            basic_operations(choice);  // Call basic operations function
            break;
        case 6: {
            // Complex number addition
            complex a, b, sum;

            // Get the real and imaginary parts of the first complex number
            printf("Enter the real and imaginary parts of the first complex number (e.g., 3 4 for 3 + 4i): ");
            scanf("%d %d", &a.real, &a.img);

            // Get the real and imaginary parts of the second complex number
            printf("Enter the real and imaginary parts of the second complex number (e.g., 5 6 for 5 + 6i): ");
            scanf("%d %d", &b.real, &b.img);

            // Add the two complex numbers
            sum = add_complex(a, b);

            // Display the result
            if (sum.img < 0)
                printf("Sum = %d - %di\n", sum.real, -sum.img);  // If imaginary part is negative, show minus
            else
                printf("Sum = %d + %di\n", sum.real, sum.img);  // If positive, show plus
            break;
        }
        case 7:
            matrix_addition();  // Call matrix addition function
            break;
        case 8:
            // Exit the program
            printf("Exiting the calculator. Thank you!\n");
            exit(0);
        default:
            // Handle invalid input
            printf("Invalid choice! Please try again.\n");
    }

    // Prompt to continue or exit
    printf("\nDo you want to perform another operation? (y/n): ");
    scanf(" %c", &continue_choice);  // Space before %c to handle newline

    switch (continue_choice) {
        case 'y':
        case 'Y':
            goto start;  // Restart the menu
        case 'n':
        case 'N':
            printf("Thank you for using the calculator. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid input! Exiting.\n");
            exit(0);
    }

    return 0;
}

// Function for basic operations (+, -, *, /, %)
void basic_operations(int operation) {
    float num1, num2, result;
    int mod_result;

    // Prompt user for two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the selected operation
    switch (operation) {
        case 1:  // Addition
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:  // Subtraction
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:  // Multiplication
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:  // Division
            if (num2 == 0) {  // Check for division by zero
                printf("Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        case 5:  // Modulus
            if ((int)num2 == 0) {  // Check for modulus by zero
                printf("Modulus by zero is not allowed.\n");
            } else {
                mod_result = (int)num1 % (int)num2;
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, mod_result);
            }
            break;
    }
}

// Function for addition of complex numbers
complex add_complex(complex x, complex y) {
    complex sum;
    sum.real = x.real + y.real;  // Add real parts
    sum.img = x.img + y.img;    // Add imaginary parts
    return sum;
}

// Function for addition of matrices
void matrix_addition() {
    int rows, cols;

    // Get matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare matrices
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    // Get elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Get elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add corresponding elements of the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the resulting sum matrix
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
/* OUTPUT

		 *** Menu Driven Calculator *** 
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Addition of Complex Numbers
7. Addition of Matrices
8. Exit
Enter your choice: 1
Enter the first number: 1
Enter the second number: 2
Result: 1.00 + 2.00 = 3.00

Do you want to perform another operation? (y/n): y

		 *** Menu Driven Calculator *** 
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Addition of Complex Numbers
7. Addition of Matrices
8. Exit
Enter your choice: 2
Enter the first number: 1
Enter the second number: 2
Result: 1.00 - 2.00 = -1.00

Do you want to perform another operation? (y/n): y

		 *** Menu Driven Calculator *** 
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Addition of Complex Numbers
7. Addition of Matrices
8. Exit
Enter your choice: 3
Enter the first number: 2
Enter the second number: 3
Result: 2.00 * 3.00 = 6.00

Do you want to perform another operation? (y/n): y

		 *** Menu Driven Calculator *** 
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Addition of Complex Numbers
7. Addition of Matrices
8. Exit
Enter your choice: 4
Enter the first number: 2
Enter the second number: 2
Result: 2.00 / 2.00 = 1.00

Do you want to perform another operation? (y/n): y

		 *** Menu Driven Calculator *** 
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Addition of Complex Numbers
7. Addition of Matrices
8. Exit
Enter your choice: 5
Enter the first number: 5
Enter the second number: 5
Result: 5 % 5 = 0

Do you want to perform another operation? (y/n): y


		 *** Menu Driven Calculator *** 
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Addition of Complex Numbers
7. Addition of Matrices
8. Exit
Enter your choice: 6
Enter the real and imaginary parts of the first complex number (e.g., 3 4 for 3 + 4i): 3 4
Enter the real and imaginary parts of the second complex number (e.g., 5 6 for 5 + 6i): 5 4
Sum = 8 + 8i

Do you want to perform another operation? (y/n): y

		 *** Menu Driven Calculator *** 
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Modulus (%)
6. Addition of Complex Numbers
7. Addition of Matrices
8. Exit
Enter your choice: 7
Enter the number of rows: 2
Enter the number of columns: 2
Enter elements of the first matrix:
2 2
3 3
Enter elements of the second matrix:
3 3
4 4
Sum of the matrices:
5 5 
7 7 

Do you want to perform another operation? (y/n): n
Thank you for using the calculator. Goodbye!

*/
