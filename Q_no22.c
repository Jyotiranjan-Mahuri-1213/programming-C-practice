#include<stdio.h>
int main()
{
    float p,t,r,I,C;
    printf("enter principle:\n");
    scanf("%f",&p);
    printf("enter time:\n");
    scanf("%f",&t);
    printf("enter rate:\n");
    scanf("%f",&r);
    I=(p*t*r)/100;
    C=p+I;
    printf("Compound interest=%f",C);
    return 0;
}