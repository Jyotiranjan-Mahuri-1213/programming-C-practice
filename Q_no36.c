#include<stdio.h>
int main()
{
    int i,num,p,result=1;
printf("enter a number and power of number");
scanf("%d %d",&num,&p);
for(i=1;i<=p;i++)
{
    result=result*num;
}
    printf("power of %d to the power %d is %d",num,p,result);


return 0;
}