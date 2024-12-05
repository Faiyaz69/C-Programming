/*
    Expt. No : 9
    Title : Design a structure student_record to contain name, roll_number, and total
    marks obtained. Write a program to read 5 students data from the user and then
    display the topper on the screen.


    Name: Shah Faiyaz Husain Gulam Husain
    Class & Div: ECS-E
    UIN: 241S044
 */
#include <stdio.h>
#include <string.h>

// Define the structure 'student_record' to store student's information
struct student_record {
    char name[50];         // Array to store the student's name
    int roll_number;       // Integer to store the student's roll number
    float total_marks;     // Float to store the total marks obtained by the student
};

int main() {
    // Declare an array of 5 student_record structures to hold data for 5 students
    struct student_record students[5];

    // Initialize a variable to track the index of the topper (the student with the highest marks)
    int topperIndex = 0;

    // Loop to input details for 5 students
    for (int i = 0; i < 5; i++) {
        // Prompt the user to enter details for the current student
        printf("\nEnter details for student %d:\n", i + 1);
        
        // Read the student's name, allowing spaces in the name by using the format " %[^\n]"
      printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        // Read the student's roll number
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        // Read the total marks obtained by the student
        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);

        // If the current student has more marks than the previous topper, update the topperIndex
        if (students[i].total_marks > students[topperIndex].total_marks) {
            topperIndex = i;  // Update the index of the topper to the current student
        }
    }

    // Output the details of the topper
    printf("\nTopper:\n");
    // Print the name of the topper
    printf("\n\nName: %s\n", students[topperIndex].name);
    // Print the roll number of the topper
    printf("Roll Number: %d\n", students[topperIndex].roll_number);
    // Print the total marks of the topper, formatted to 2 decimal places
    printf("Total Marks: %.2f\n", students[topperIndex].total_marks);

    // Return 0 to indicate successful execution of the program
    return 0;
}
/* OUTPUT

Enter details for student 1:
Name: Kamran shaikh
Roll Number: 12
Total Marks: 100

Enter details for student 2:
Name: Firdaus Shaikh
1Roll Number: 3
Total Marks: 98

Enter details for student 3:
Name: Farhan shaikh
Roll Number: 20
Total Marks: 98

Enter details for student 4:
Name: Siraj khan
Roll Number: 27
Total Marks: 95

Enter details for student 5:
Name: Ayan khan
Roll Number: 22
Total Marks: 25

Topper:

Name: Kamran shaikh
Roll Number: 12
Total Marks: 100.00

*/
