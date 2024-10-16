#include <stdio.h>
int main()
{
    int start_num,end_num,sum=0,i;

    printf("\t\t\tSUM OF ODD NUMBERS\n\n\n");

    printf("Enter start number :");
    scanf("%d",&start_num);
    printf("Enter end number :");
    scanf("%d",&end_num);

    if(start_num>end_num){
        printf("ERROR : end number should be higher than the start number");
        return 1;
    }
    for(i=start_num; i<=end_num;i++)
    {
        if (i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("sum of all numbers between %d & %d = %d", start_num,end_num,sum);
    return 0;
}
