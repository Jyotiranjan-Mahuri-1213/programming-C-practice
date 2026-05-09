//Swap two numbers without using a temporary variable. 
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers to swap:\n");
    scanf("%d %d",&a,&b);
a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the value is:%d and %d",a,b);
    return 0;
}