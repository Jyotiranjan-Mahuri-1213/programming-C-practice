#include<stdio.h>
int main()
{
    int num,temp,rem,rev;
    printf("enter a number:\n");
    scanf("%d",&num);
temp=num;
for(rev=0;num!=0;num=num/10){
rem=num%10;
rev=rev*10+rem;
}
if(temp==rev)
{
    printf("the number is a palindrome no.");
}
else{
    printf("it is not a palindrome no.");
}
return 0;
}