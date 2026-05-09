// program to swap two numbers using a temporary variable. 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two number:\n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping the value is %d and %d",a,b);
    return 0;
}