#include<stdio.h>
int main()
{
    int num,sum,temp;
    printf("enter a number:\n");
    scanf("%d",&num);
    for(sum=0;num!=0;num=num/10){
    temp=num%10;
    sum=sum+temp;
    }
    printf("the sum of digit of the number =%d ",sum);
    return 0;
}