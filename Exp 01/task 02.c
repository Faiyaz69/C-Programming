#include <stdio.h>
int main()
{
    int P,C,M,avg;
    printf("STUDENT ELIGIBILITY CALCULATOR\n\n\n");

    printf("ENTER PHYSICS MARKS:\t");
    scanf("%d",&P);
    printf("ENTER CHEMISTRY MARKS:\t");
    scanf("%d",&C);
    printf("ENTER MATHS MARKS:\t");
    scanf("%d",&M);
    avg = (P+C+M)/3;
    printf("PCM Average=%d\n",avg);
    avg>=50?printf("YOU ARE ELIGIBLE"):printf("YOU ARE NOT ELIGIBLE");
    return 0;
}

/* 
OUTPUT
+++ Student Eligibility Calculator +++
Enter physics marks: 95
Enter chemistry marks: 95
Enter maths marks: 80
PCM Average = 90.00
You are eligible for admission.
*/
