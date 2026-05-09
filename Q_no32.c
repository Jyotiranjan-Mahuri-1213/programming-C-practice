#include<stdio.h>
int main()
{
    int num,rev,rem;
    printf("enter a number\n");
    scanf("%d",&num);
   
    for(rev=0;num!=0;num=num/10){
    rem=num%10;
    rev=rev*10+rem;
    }
 printf("after reverse the number is %d",rev);
    return 0;
}
