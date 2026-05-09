// program to take user input for name, age, and marks, and display them. 

#include<stdio.h>
int main()
{
    char name[20];
 int age;
    float marks;
    printf("enter the name:\n");
    scanf("%s",&name);

     printf("enter age:\n");
      scanf("%d",&age);
     
      printf("enter marks:\n");
    scanf("%f",&marks);
    printf("\n name=%s",name);
    printf("\n age=%d",age);
    printf("\n marks=%f",marks);
    return 0;
}