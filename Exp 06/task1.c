/*
    Expt. No : 6
    Title : WAP to define a counter function to print how many times the function is called. use
    storage classes.


    Name: Faiyaz Shah
    Class & Div: ECS-E
    UIN: 241S044
 */
#include <stdio.h>

// Declaring an external variable to track function calls
extern int countExtern; 

// Function with a static variable to count calls to this function
void counterFunctionStatic() {
    // Static variable retains its value across function calls
    static int countStatic = 0;
    countStatic++; // Increment the static counter
    // Print the number of times the static function has been called
    printf("Static: Function called %d times\n", countStatic);
}

// Function with an automatic variable (auto) to count calls
void counterFunctionAuto() {
    // Auto variables are reinitialized each time the function is called
    auto int countAuto = 0;
    countAuto++; // Increment the auto counter
    // Print the number of times the auto function has been called
    printf("Auto: Function called %d times\n", countAuto);
}

// Function with a register variable to count calls
void counterFunctionRegister() {
    // Register variable suggests the variable be stored in a CPU register for fast access
    register int countRegister = 0;
    countRegister++; // Increment the register counter
    // Print the number of times the register function has been called
    printf("Register: Function called %d times\n", countRegister);
}

// Function with an external variable to count calls
void counterFunctionExtern() {
    // Declare the external variable, it refers to the global variable defined below
    extern int countExtern;
    countExtern++; // Increment the external counter
    // Print the number of times the external function has been called
    printf("Extern: Function called %d times\n", countExtern);
}

// External variable definition, which will be shared across different files
int countExtern = 0; 

int main() {
    // Call the function that uses a static variable, the count will persist across calls
    counterFunctionStatic();  // Static: Function called 1 time
    counterFunctionStatic();  // Static: Function called 2 times
    counterFunctionStatic();  // Static: Function called 3 times
    
    // Call the function that uses an automatic variable, the count resets each time
    counterFunctionAuto();    // Auto: Function called 1 time
    counterFunctionAuto();    // Auto: Function called 1 time
    
    // Call the function that uses a register variable, count resets each time (similar to auto)
    counterFunctionRegister(); // Register: Function called 1 time
    counterFunctionRegister(); // Register: Function called 1 time
    
    // Call the function that uses an external variable, count persists across calls
    counterFunctionExtern();  // Extern: Function called 1 time
    counterFunctionExtern();  // Extern: Function called 2 times
    counterFunctionExtern();  // Extern: Function called 3 times
    
    return 0;
}
/* OUTPUT
Static: Function called 1 times
Static: Function called 2 times
Static: Function called 3 times
Auto: Function called 1 times
Auto: Function called 1 times
Register: Function called 1 times
Register: Function called 1 times
Extern: Function called 1 times
Extern: Function called 2 times
Extern: Function called 3 times
*/
