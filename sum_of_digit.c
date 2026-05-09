#include<stdio.h>
int main()
{
    int num,r,sum;
    printf("enter a number:\n");
    scanf("%d",&num);
    for (sum=0;num!=0;num=num/10){
     r=num%10;
     sum=sum+r;
    }
    printf("sum of digits:%d",sum);
    return 0; 
}