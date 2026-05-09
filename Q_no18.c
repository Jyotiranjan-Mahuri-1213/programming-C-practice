#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2;
    printf("enter the value of a,b,c:\n");
    scanf("%f %f %f",&a,&b,&c);
root1=-b+sqrt(b*b-4*a*c)/2*a;
root1=-b-sqrt(b*b-4*a*c)/2*a;
printf("root1 of the quadratic equation=%f\n",root1);
printf("root2 of the quadratic equation=%f",root2);
return 0;
}