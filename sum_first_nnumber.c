#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number you want to calculate the sum:\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum=sum+i;
    }
    printf("the sum of first %d natural no:%d",n,sum);
    return 0;
}