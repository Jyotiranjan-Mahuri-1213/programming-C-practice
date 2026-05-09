//program to convert a given temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float C,F;
    printf("enter temperature in celcius:\n");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("the temperature in farenhit:%f",F);
    return 0;

}