// program to calculate the average of n numbers entered by the user
#include<stdio.h>
int main()
{
    int i,n;
   float sum=0.0,avg,num; 
    printf("how many numbers you want to calculate avg:\n");
    scanf("%d",&n);

    for(i=1;i<=n;++i)
    {
        printf("enter the no %d:",i);
        scanf("%f",&num);
        sum=sum+num;
    }
    avg=sum/n;
    printf("average =%f",avg);
    return 0;
}