#include<stdio.h>
int main (){
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    printf("pre increment:%d\n",++a);
    printf("post increment:%d\n",a++);
     printf("Value after post-increment: %d\n", a);
    printf("pre decrement:%d\n",--a);
    printf("post decrement:%d",a--);
    printf("Value after post-decrement: %d\n", a);

    return 0;
}