#include<stdio.h>
int main()
{
    int i,a,b,gcd;
    printf("enter two number:\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;++i)
    {
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    printf("the GCD of two no:%d",gcd);
    return 0;
}