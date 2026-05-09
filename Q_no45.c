#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character:\n");
    scanf("%c",&ch);
     if(ch>='0'&&ch<='9'){
         printf("it is a digit",ch);
        }
else{
    printf("it is a not a digit",ch);;
}
return 0;
}