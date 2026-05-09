#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    (num%2==0)?(printf("%d is even",num)):(printf("%d is odd",num));
    return 0;
}