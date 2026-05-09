// program to calculate the sum and average of three numbers.
#include<stdio.h>
int main ()
{
    float num1,num2,num3,sum,avg;
    printf("enter three numbers:\n");
    scanf("%f %f %f",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("sum=%f\n",sum);
     avg=sum/3;
    printf("avg=%f\n",avg);
    return 0;

}