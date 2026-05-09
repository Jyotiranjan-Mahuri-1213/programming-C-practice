#include<stdio.h>
int main()
{
    int num,rem,rev,temp;
    printf("enter a number\n");
    scanf("%d",&num);
    temp=num;
    for(rev=0;num!=0;num=num/10)
    {
        rem=num%10;
        rev=rev*10+rem;
    }
if(rev==temp)
{
    printf("it is a pallindrome number.");
}
else{
    printf("it is not a pallindrome number.");
}
return 0;
}
