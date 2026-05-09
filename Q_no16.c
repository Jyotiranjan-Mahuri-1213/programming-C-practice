#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    if(a>0){
    printf("%d is positive",a);
    }
    else if (a<0){
        printf("%d is negative",a);
    }
    else
{
    printf("it is zero",a);
}

return 0;

}