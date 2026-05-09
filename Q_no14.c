//program to demonstrate the use of logical operators
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter two number:\n");
    scanf("%d %d",&a,&b);
    if(a>0&&a>b){
    c=a-b;
    printf("result=%d",c);
    }
    else if(a<b||a>b)
{
    c=a+b;
        printf("result=%d",c);
    }
else 
{
    printf("wrong choice.");
}
return 0;
    }

   

