#include<stdio.h>
int main()
{
    int i,a,b,lcm,gcd;
    printf("enter two number:\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;++i)
    {
 
        if(a%i==0&&b%i==0){
 gcd=i;
 lcm=(a*b)/gcd;
     }
    }
    
    printf("the LCM of two no:%d",lcm);
    return 0;
}