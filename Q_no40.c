//wap to use of assignment operator 
#include <stdio.h>
int main()
{
    int a=10,b;
    printf("the value of a:%d\n",a);
    b=a;
    printf("b=%d\n",b);
    b+=3;
    printf("b+=3 ans=%d\n",b);
     b-=3;
    printf("b-=3 ans=%d\n",b);
     b*=3;
    printf("b*=3 ans=%d\n",b);
     b/=3;
    printf("b/=3 ans=%d\n",b);
     b%=3;
    printf("b%=3 ans=%d\n",b);
    return 0;
}