#include<stdio.h>
int main()
{
    float p,t,r,I;
    //p for principle
    //t for time
    //r for rate
    printf("enter principle:\n");
    scanf("%f",&p);
    printf("enter time:\n");
    scanf("%f",&t);
    printf("enter rate:\n");
    scanf("%f",&r);
I = (p*t*r)/100;
printf("Simple Interest=%f",I);
return 0;
}