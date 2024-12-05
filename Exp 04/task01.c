/*
    Expt. No : 4
    Title : WAP to find all the prime numbers between two numbers using functions.

    Name: Faiyaz Shah
    Class & Div: ECS-E
    UIN: 241S044
 */

//find all the prime numbers between two numbers using functions
#include <stdio.h>
int isPrime(int num){
if (num < 2){
return 0;// Not prime
}
for (int i = 2; i * i <= num; i++){
if (num % i == 0)
{// Found a divisor
return 0;
}
}
return 1; // Prime number
}
void findPrimes(int start, int end){
    printf("Prime numbers between %d and %d are:\n", start, end);
for (int i = start; i <= end; i++)
{
if (isPrime(i))
{
    printf("%d ", i);
}
}
    printf("\n");
}
int main(){
    int start, end;
    // take user input
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
     // displaying  prime numbers
    findPrimes(start, end);
return 0;
}
/*
OUTPUT
Enter the starting number: 2
Enter the ending number: 13
Prime numbers between 2 and 13 are:
2 3 5 7 11 13
*/
