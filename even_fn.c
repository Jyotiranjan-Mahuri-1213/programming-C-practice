#include<stdio.h>
int check_even_odd (int);
int check_even_odd(int n)
{
    if(n%2==0)
    printf("even\n");
    else
    printf("odd\n");
    return 0;

}
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    check_even_odd (a);
    return 0;

}