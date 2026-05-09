//program to perform addition, subtraction, multiplication, and division of two numbers
#include<stdio.h>
int main()
{
    char ch;
   printf("enter any arithematic symbol:\n");
   scanf("%c",&ch);
    
   int a,b,c;
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    
    switch(ch)
    {
        case '+':
        c=a+b;
        printf("sum=%d",c);
        break;
        case '-':
        c=a-b;
        printf("subtraction=%d",c);
        break;
        case '*':
        c=a*b;
        printf("multiplication=%d",c);
        break ;
        case '/':
        c=a/b;
        printf("division=%d",c);
        break;
        case '%':
        c=a%b;
        printf("remainder=%d",c);
        break;
        default:
        printf("wrong input");
    }
    return 0;
}