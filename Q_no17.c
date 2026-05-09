#include<stdio.h>
int main()
{
   float r,area,cir;
const float pi=3.14159;
printf("enter radius:\n");
scanf("%f",&r);
area=pi*r*r;
cir=2*pi*r;
printf("area of circle =%f",area);
printf("circumference=%f",cir);
return 0;

}