//program to calculate the sum of the first n natural numbers. 
#include<stdio.h>
int main()
{
    int i,num,mul;
    printf("enter the number to find the mulltiplication table:\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        mul=num*i;
         printf("%d*%d=%d\n",num,i,mul);
    }
    
    return 0;
}