#include<stdio.h>
int main()
{
    int num,set;
    printf("enter a number:\n");
    scanf("%d",&num);
    printf("enter the bit to set:\n");
    scanf("%d",&set);
    num=(num|(1<<set));
    printf("after set the no is %d",num);
    return 0;
}