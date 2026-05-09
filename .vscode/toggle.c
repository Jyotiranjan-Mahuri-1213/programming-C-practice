#include<stdio.h>
int main()
{
    int num,bit;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("enter the position to toggle:\n");
    scanf("%d",&bit);
    num=(num^(1<<bit));
    printf("the number is %d",num);
    return 0;
}