//program to find the largest of three numbers. 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is greater.",a);
        }
         else{
    printf("%d is gretaer.",c);
}
    }
else {
if(b>c){
    printf("%d is greater.",b);
}
else{
printf("%d is greater.",c);
}
}
return 0;
}